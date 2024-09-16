#include <iostream>
using namespace std;

class Base {
public:
   virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived1 : public Base {
public:
    void show()
     {  // Overriding the base class function
        cout << "Derived class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    void show2()
     {  // Overriding the base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr;        // Pointer of base class type
    Derived1 derivedObj1;   // Object of derived class

    basePtr = &derivedObj1;  // Base class pointer pointing to derived class object

    // Calls Derived class's overridden show function because of runtime polymorphism
    basePtr->show();

    Derived2 derivedObj2;   // Object of derived class

    basePtr = &derivedObj2;  // Base class pointer pointing to derived class object

    // Calls Base class show function because of absence of derived class show function
    basePtr->show();
    
    //------------------------------------------------------------------------------------------------------
    // Base base;        // object base class type
    // Derived *derivedptr;   // pointer of derived class

    // derivedptr = &base;  // derived class pointer pointing to base class object

    // // give error cant have derived pointer that can points out base class
    // derivedptr->show();


    return 0;
}
