#include "PMergeMe.hpp"

int main(int ac, char **av)
{
    try {
        PMergeMe pmm(av, ac);
		std::cout << "Before: ";
		pmm.print_vector(pmm.v1);
		pmm.merge_vector();
    	pmm.merge_deque();
		std::cout << "After: ";
		pmm.print_vector(pmm.v1);
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector :" << std::fixed << pmm.get_time_vector() << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque :" << std::fixed << pmm.get_time_deque() << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}

// https://github.com/decidedlyso/merge-insertion-sort/blob/master/diagram.svg
