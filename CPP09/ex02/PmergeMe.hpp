#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <sys/time.h>
#include <limits>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(char *av[], int ac);
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);

		void merge_vector();
		void merge_deque();
		void print_deque();
		void print_vector();
		float get_time_vector() const;
		float get_time_deque() const;

		class IllegalCharacter: public std::exception {
			virtual const char * what() const throw();
		};

		class NegativeNumber: public std::exception {
			virtual const char * what() const throw();
		};

	private:
		std::vector<int> v1;
		std::deque<int> d2;
		std::vector<int> v2;
		std::deque<int> d1;
		int contLength;
		float time_vector;
		float time_deque;
		int	oddNumber;
		bool hasOddNumber;

		void sortVectorPairs();
		void sortDequePairs();
		void insertVectorNumber(int nr);
		void insertDequeNumber(int nr);
		void fill_containers(char *av[], int ac);
		int getNextIndex(int index, int maxIndex) const;
		int getJacobsthalNumber(int index) const;
		int IsValidNumber(char * nr) const;
};



#endif
