#include "Serializer.hpp"

Serializer::Serializer(void) {
}

Serializer::Serializer(const Serializer &copy) {
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &sc) {
	(void) sc;
	return (*this);
}

Serializer::~Serializer(void) {
}

//uintptr_t is an unsigned integer type that is capable of storing a data pointer
//This conversion does not modify the underlying data; it just changes the type of the pointer.
uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
