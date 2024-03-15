#include "PMergeMe.hpp"

int main(int ac, char **av)
{
    PMergeMe pmm;
    try {
        pmm = PMergeMe(av, ac);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    pmm.merge_vector();
    pmm.print_vector();
    return 0;
}