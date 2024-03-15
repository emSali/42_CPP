#include "PMergeMe.hpp"

PMergeMe::PMergeMe()
{
    time_vector = 0;
    time_deque = 0;
}

PMergeMe::PMergeMe(char *av[], int ac)
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

void PMergeMe::merge_vector()
{
    struct timeval start, end;
    gettimeofday(&start, NULL);


    gettimeofday(&end, NULL);
    time_vector = (end.tv_sec - start.tv_sec) * 1000.0;

    print_vector();
}

void PMergeMe::merge_deque()
{
    struct timeval start, end;
    gettimeofday(&start, NULL);


    gettimeofday(&end, NULL);
    time_vector = (end.tv_sec - start.tv_sec) * 1000.0;
    print_deque();
}

void PMergeMe::print_deque()
{
    std::deque<int>::iterator it = d1.begin();
    while (it != d1.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

void PMergeMe::print_vector()
{
    std::vector<int>::iterator it = v1.begin();
    while (it != v1.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
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