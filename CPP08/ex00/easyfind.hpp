#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include <algorithm>

template<typename T>
int easyfind(T t, int find) {
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), find);
	if (it != t.end())
		return (std::distance(t.begin(), it));
	return (-1);
}

#endif
