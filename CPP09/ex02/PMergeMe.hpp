#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <sys/time.h>

class PMergeMe
{
	public:
		PMergeMe();
		PMergeMe(char *av[], int ac);
		~PMergeMe();
		PMergeMe(const PMergeMe &copy);
		PMergeMe &operator=(const PMergeMe &copy);

		void merge_vector();
		void merge_deque();
		void print_deque(std::deque<int> d);
		void print_vector(std::vector<int> v);
		float get_time_vector();
		float get_time_deque();

		class IllegalCharacter: public std::exception {
			virtual const char * what() const throw();
		};

		// TODO!!! PUT PRIVATE
		std::vector<int> v1;
		std::deque<int> d2;

	private:
		std::vector<int> v2;
		std::deque<int> d1;
		int contLength;
		float time_vector;
		float time_deque;
		int	oddNumber;

		void sortVectorPairs();
		void sortDequePairs();
		void insertVectorNumber(int nr);
		// void insertDequeNumber(int nr);
		void fill_containers(char *av[], int ac);
		int getNextIndex(int index, int maxIndex);
		int getJacobsthalNumber(int index);


};



#endif
