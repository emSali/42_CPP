#include "easyfind.hpp"

int main(void) {
	// dynamic array
	std::vector<int> vec(4, 42);
	std::cout << "pos: " << easyfind(vec, 42) << std::endl;
	std::cout << "pos: " << easyfind(vec, 99) << std::endl;

	std::cout << "-----------------------------" << std::endl << std::endl;

	// double linked list
	std::list<int> list;
	list.push_back(4);
	list.push_front(2);
	list.push_front(42);
	list.push_back(-42);
	list.push_back(-1);
	std::cout << "pos: " << easyfind(list, -42) << std::endl;
	std::cout << "pos: " << easyfind(list, 0) << std::endl;

	std::cout << "-----------------------------" << std::endl << std::endl;

	// double-ended queue data structure
	std::deque<int> que;
	que.push_back(0);
	que.push_back(-42);
	que.push_back(42);
	std::cout << "pos: " << easyfind(que, 42) << std::endl;
	std::cout << "pos: " << easyfind(que, -99) << std::endl;

	return (0);
}
