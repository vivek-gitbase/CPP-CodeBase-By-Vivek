// C++ program to illustrate
// concept of Virtual Functions

#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { cout << "print base class\n"; }

	void show() { cout << "show base class\n"; }

	virtual void show2() =0; // Pure-virtual function Do-nothing Function now this is mandatory in child class
};

class derived : public base {
public:
	void print() { cout << "print derived class\n"; }

	void show() { cout << "show derived class\n"; }

	void show2() { cout << "show derived class\n"; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	// Pure-virtual function, binded at compile time
	bptr->show2();

	return 0;
}
