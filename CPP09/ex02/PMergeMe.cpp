#include "PMergeMe.hpp"

PMergeMe::PMergeMe()
{
	contLength = 0;
	time_vector = 0;
	time_deque = 0;
}

PMergeMe::PMergeMe(char *av[], int ac): contLength(ac - 1)
{
	time_vector = 0;
	time_deque = 0;
	fill_containers(av, ac);
}

PMergeMe::~PMergeMe()
{
}

PMergeMe::PMergeMe(const PMergeMe &copy)
{
	*this = copy;
}

PMergeMe &PMergeMe::operator=(const PMergeMe &copy)
{
	v1 = copy.v1;
	v2 = copy.v2;
	d1 = copy.d1;
	d2 = copy.d2;
	time_vector = copy.time_vector;
	time_deque = copy.time_deque;
	return *this;
}

void PMergeMe::fill_containers(char *av[], int ac)
{
	int i = 1;
	while (i < ac)
	{
		v1.push_back(std::atoi(av[i]));
		d1.push_back(std::atoi(av[i]));
		if (v1.back() == 0 && !(av[i][0] == '0' && av[i][1] == '\0'))
			throw PMergeMe::IllegalCharacter();
		i++;
	}
}



void PMergeMe::merge_deque()
{
	std::cout << "***** DEQUE *****" << std::endl;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	sortDequePairs();
	print_deque(d1);
	print_deque(d2);
	gettimeofday(&end, NULL);
	time_vector = (end.tv_sec - start.tv_sec) * 1000.0;
}

void PMergeMe::sortDequePairs() {
	std::deque<int> temp;
	if (contLength % 2 == 1) {
		oddNumber = d1[contLength - 1];
		d1.pop_back();
	}
	for (int i = 0; i < contLength - 1; i = i + 2) {
		if (d1[i] < d1[i + 1]) {
			temp.push_back(d1[i + 1]);
			d2.push_back(d1[i]);
		} else {
			temp.push_back(d1[i]);
			d2.push_back(d1[i + 1]);
		}
	}
	d1.empty();
	d1 = temp;
	std::sort(d1.begin(), d1.end());
	std::sort(d2.begin(), d2.end());
}

void PMergeMe::merge_vector()
{
	std::cout << "***** VECTOR *****" << std::endl;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	sortVectorPairs();
	print_vector(v1);
	print_vector(v2);
	std::cout << std::endl;
	int index = 0;
	for (int i = 0; i < (int) v2.size(); i++) {
		insertVectorNumber(v2[index]);
		index = getNextIndex(index, v2.size() - 1);
	}
	std::cout << std::endl;
	print_vector(v1);
	gettimeofday(&end, NULL);
	time_vector = ((end.tv_sec - start.tv_sec) * 1e6) + (end.tv_usec - start.tv_usec) * 1e-6;
}

void PMergeMe::insertVectorNumber(int nr) {
	std::vector<int>::iterator it = std::lower_bound(v1.begin(), v1.end(), nr);
	v1.insert(it, nr);
}


void PMergeMe::sortVectorPairs() {
	std::vector<int> temp;
	if (contLength % 2 == 1) {
		oddNumber = v1[contLength - 1];
		v1.pop_back();
	}
	for (int i = 0; i < (int)v1.size(); i += 2) {
		if (v1[i] < v1[i + 1]) {
			temp.push_back(v1[i + 1]);
			v2.push_back(v1[i]);
		} else {
			temp.push_back(v1[i]);
			v2.push_back(v1[i + 1]);
		}
	}
	v1.empty();
	v1 = temp;
	std::sort(v1.begin(), v1.end());
	std::sort(v2.begin(), v2.end());
}

void PMergeMe::print_deque(std::deque<int> d)
{
	std::deque<int>::iterator it = d.begin();
	while (it != d.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void PMergeMe::print_vector(std::vector<int> v)
{
	std::vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int PMergeMe::getNextIndex(int lastIndex, int maxIndex) {
	if (lastIndex == 0)
		return 1;
	int lastJacobsthalNumber = 0;
	int nextJacobsthalNumber = 1;
	int i = 1;
	while (nextJacobsthalNumber < lastIndex) {
		i++;
		lastJacobsthalNumber = nextJacobsthalNumber;
		nextJacobsthalNumber = getJacobsthalNumber(i);
	}
	//std::cout << "index: " << lastIndex << ", lastJacob: " << lastJacobsthalNumber << ", nextJacob...: " << nextJacobsthalNumber << std::endl;
	// if ((lastJacobsthalNumber + 1) == lastIndex && lastIndex < maxIndex)
	// 	return nextJacobsthalNumber;
	// else if ((lastJacobsthalNumber + 1) == lastIndex)
	// 	return maxIndex;
	// return (lastIndex - 1);

	if (nextJacobsthalNumber - lastJacobsthalNumber > 1 && lastIndex > (lastJacobsthalNumber + 1)) {
	 	return lastIndex - 1;
		//std::cout << "returned here " << std::endl;
	}
	nextJacobsthalNumber = getJacobsthalNumber(++i);
	//std::cout << "nextjacob... " << nextJacobsthalNumber << std::endl;
	if (nextJacobsthalNumber == lastIndex)
		nextJacobsthalNumber = getJacobsthalNumber(++i);
	if (nextJacobsthalNumber > maxIndex) {
		return maxIndex;
	}
	return nextJacobsthalNumber;
}

int	PMergeMe::getJacobsthalNumber(int index) {
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	return getJacobsthalNumber(index - 1) + 2 * getJacobsthalNumber(index - 2);
}

float PMergeMe::get_time_vector()
{
	return time_vector;
}

float PMergeMe::get_time_deque()
{
	return time_deque;
}

const char *PMergeMe::IllegalCharacter::what() const throw()
{
	return "Error: Illegal argument";
}
