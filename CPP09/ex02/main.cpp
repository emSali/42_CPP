#include "PMergeMe.hpp"

int main(int ac, char **av)
{
    try {
        PMergeMe pmm(av, ac);
    	pmm.merge_deque();
		pmm.merge_vector();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}

// https://github.com/decidedlyso/merge-insertion-sort/blob/master/diagram.svg
