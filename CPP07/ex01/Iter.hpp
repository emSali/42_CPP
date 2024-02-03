#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arr, int len, F f) {
	if (len <= 0)
		return ;
	for (int i = 0; i < len; i ++) {
		f(arr[i]);
	}
}

#endif
