#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <algorithm>
#include <iostream>


// Last-In First-Out
template <typename T>
class MutantStack: public std::stack<T> {

	public:
		MutantStack(){}

		MutantStack(const MutantStack &copy){
			std::stack<T>::operator=(copy);
		}

		MutantStack &operator=(const MutantStack &assign){
			std::stack<T>::operator=(assign);
			return (*this);
		}

		~MutantStack(void){}

		// alias for underlying container type (stack)
		typedef typename std::stack<T>::container_type cont;
		// alias for cont::iterator
		typedef typename cont::iterator iterator;

		typename cont::iterator begin() {
			return std::stack<T>::c.begin();
		};

		typename cont::iterator end() {
			return std::stack<T>::c.end();
		};

};



#endif
