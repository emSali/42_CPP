#include "MutantStack.hpp"

int main() {

	std::cout << std::endl << "-- MUTANT STACK ---------------------------" << std::endl << std::endl;

	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << "-- LIST ---------------------------" << std::endl << std::endl;

	{
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(list);
	}

	std::cout << std::endl << "-- MORE MUTANT STACK TESTS ---------------------------" << std::endl << std::endl;

	{

		MutantStack<int> foo,bar;
		std::cout << "foo is empty: " << foo.empty() << " bar is empty: " << bar.empty() << std::endl << std::endl;
		foo.push (10); foo.push(20); foo.push(30);
		bar.push (111); bar.push(222);
		std::cout << "size of foo: " << foo.size() << std::endl;
		std::cout << "size of bar: " << bar.size() << std::endl << std::endl;

		MutantStack<int>::iterator itFoo = foo.begin();
		MutantStack<int>::iterator itBar = bar.begin();
		MutantStack<int>::iterator iteFoo = foo.end();
		MutantStack<int>::iterator iteBar = bar.end();

		std::cout << "--Foo:" << std::endl;
		while (itFoo != iteFoo)
			{
			std::cout << *itFoo << std::endl;
			++itFoo;
			}

		std::cout << "--Bar:" << std::endl;
		while (itBar != iteBar) {
			std::cout << *itBar << std::endl;
			++itBar;
		}

		std::cout << std::endl << "After top, pop, push and addition:" << std::endl;
		foo.pop();
		foo.pop();
		foo.top() = 0;
		foo.push(1);
		foo.push(42);
		bar.push(424242);
		bar.push(131313);
		bar.push(1111);

		itFoo = foo.begin();
		while (itFoo != iteFoo) {
			*itFoo += 10;
			++itFoo;
		}

		std::cout << "size of foo: " << foo.size() << std::endl;
		std::cout << "size of bar: " << bar.size() << std::endl << std::endl;

		itFoo = foo.begin();
		itBar = bar.begin();
		iteFoo = foo.end();
		iteBar = bar.end();

		std::cout << "--Foo:" << std::endl;
		while (itFoo != iteFoo) {
			std::cout << *itFoo << std::endl;
			++itFoo;
		}

		std::cout << "--Bar:" << std::endl;
		while (itBar != iteBar) {
			std::cout << *itBar << std::endl;
			++itBar;
		}

	}
	return 0;

}
