
#include "Iter.hpp"

void	incrementTen(int & i) {
	i += 10;
}

void printCharToNr(char c) {
	int nr = static_cast<int>(c);
	std::cout << c << " is " << nr << std::endl;
}

int main(void) {
	int iArr[5] = {55, 44, 33 , 22, 11};
	char cArr[4] = {'a', 'B', '1', '$'};

	iter(iArr, 5, incrementTen);
	for (int i = 0; i < 5; i++)
		std::cout << iArr[i] << std::endl;

	std::cout << std::endl << "-----------------" << std::endl << std::endl;

	iter(cArr, 4, printCharToNr);

}
