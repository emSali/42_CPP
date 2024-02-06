#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
	_arr = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(uint n) {
	_arr = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array<T> &copy) {
	_arr = new T[0];
	*this = copy;
}

template <typename T>
Array<T>::~Array(void){
	delete [] _arr;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &copy){
	_size = copy.size();
	delete [] _arr;
	_arr = new T[_size];
	for (uint i = 0; i < _size; i++) {
		_arr[i] = copy._arr[i];
	}
	return *this;
}

template <typename T>
T & Array<T>::operator[](const int i) const {
	if (i < 0 || i >= (int) _size) {
		throw Array<T>::OutOfBond();
	}
	return _arr[i];
}

template <typename T>
uint Array<T>::size() const{
	return _size;
}

template <typename T>
const char *Array<T>::OutOfBond::what() const throw(){
	return "Array index out of bound";
}

template <typename T>
std::ostream & operator<<(std::ostream &o, const Array<T> &b) {
	for (int i = 0; i < (int) b.size(); i++) {
		o << i << ". " << b[i] << std::endl;
	}
	return (o);
}
