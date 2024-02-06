#include "Span.hpp"

Span::Span(): _space(0){
}

Span::Span(const Span &copy){
	*this = copy;
}

Span::Span(unsigned int N): _space(N){
}

Span &Span::operator=(const Span &assign) {
	_space = assign.getSpace();
	_vec = assign.getVector();
	return (*this);
}

Span::~Span(void) {
}

void Span::addNumber(int nr) {
	if (_vec.size() == _space)
		throw Span::TooManyElements();
	_vec.push_back(nr);
}

void Span::addNumbers(std::vector<int> nums) {
	// we use the > operator because we add _arr size to nums size.
	if (_vec.size() + nums.size() > _space)
		throw Span::TooManyElements();
	_vec.insert(_vec.end(), nums.begin(), nums.end());
}

int	Span::shortestSpan() const {
	if (_vec.size() <= 1)
		throw Span::NoSpanFound();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	int minSpan = tmp[1] - tmp[0];
	for (int i = 1; i < (int)tmp.size(); i++) {
		if ((tmp[i] - tmp[i - 1]) < minSpan)
			minSpan = tmp[i] - tmp[i - 1];
	}
	return (minSpan);
}

int	Span::longestSpan() const {
	if (_vec.size() <= 1)
		throw Span::NoSpanFound();
	int min_ele = *std::min_element(_vec.begin(), _vec.end());
	int max_ele = *std::max_element(_vec.begin(), _vec.end());
	return (max_ele - min_ele);
}

unsigned int Span::getSpace() const {
	return _space;
}

std::vector<int> Span::getVector() const {
	return _vec;
}

const char *Span::NoSpanFound::what() const throw() {
	return "Not enough elements in Span";
}


const char *Span::TooManyElements::what() const throw() {
	return "Not enough space left in Span";
}

