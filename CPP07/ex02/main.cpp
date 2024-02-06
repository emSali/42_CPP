#include "Array.tpp"

struct Test {
	int a;
};

int main() {
	int* a = new int();
	std::cout << std::endl << *a << std::endl;
	delete a;
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

	Array<int> iArr(3);
	iArr[0] = 0;
	iArr[1] = 1;
	iArr[2] = 42;
	std::cout << "Size: " << iArr.size() << std::endl;
	std::cout << iArr;
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

	Array<std::string> sArr1(2);
	sArr1[0] = "Hello";
	sArr1[1] = "World";

	// try to access out of bound
	try {
		sArr1[3] = "!";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sArr1[-1] = "...";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "Size: " << sArr1.size() << std::endl;
	std::cout << sArr1;
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

	Array<std::string> sArr2(4);
	sArr2[0] = "this";
	sArr2[1] = "is";
	sArr2[2] = "a";
	sArr2[3] = "test";
	Array<std::string> sArr3(sArr2);
	std::cout << "Size: " << sArr3.size() << std::endl;
	std::cout << sArr3 << std::endl;
	sArr3 = sArr1;
	std::cout << "Size: " << sArr3.size() << std::endl;
	std::cout << sArr3;
	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;


	Array<char> cArr1 = Array<char>(0);
	try {
		std::cout << cArr1[0] << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Array<char> cArr2 = Array<char>();
	try {
		std::cout << cArr1[0] << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "-----------------------------" << std::endl << std::endl;

	Array<Test>  testArr(3);
	testArr[0] = Test();
	testArr[0].a = 42;
	testArr[1] = Test();
	testArr[1].a = 99;
	testArr[2] = Test();
	testArr[2].a = 123123;

	std::cout << testArr[0].a << " " << testArr[1].a << " " << testArr[2].a << std::endl << std::endl;

	return (0);
}
