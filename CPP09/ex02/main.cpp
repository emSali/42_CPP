#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		return 0;
    try {
        PMergeMe pmm(av, ac);
		std::cout << "Before: ";
		pmm.print_vector();
		pmm.merge_vector();
    	pmm.merge_deque();
		std::cout << "After: ";
		pmm.print_vector();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector :" << std::fixed << pmm.get_time_vector() << " us" << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque :" << std::fixed << pmm.get_time_deque() << " us" << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}

// https://github.com/decidedlyso/merge-insertion-sort/blob/master/diagram.svg
