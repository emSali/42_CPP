#include "Serializer.hpp"

int main() {
	Data data1;
	data1.s1 = "data.s1";
	data1.i = 42;
	data1.s2 = "data.s2";

	std::cout << "Data1 value: " << data1.s1 << ", " << data1.s2 << ", " << data1.i << std::endl;

	uintptr_t raw = Serializer::serialize(&data1);
	std::cout << "Serialization: " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);
	std::cout << "Data2 value: " << data2->s1 << ", " << data2->s2 << ", " << data2->i << std::endl;
}
