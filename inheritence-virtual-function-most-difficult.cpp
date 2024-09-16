#include<iostream>
using namespace std;

class X
{
    public:
    X()
    {
        cout<<"Hello Constructor() of Class X"<<endl;
    }
    char x;
};

class A: virtual public X
{
    public:
    void display()
    {   
        cout<<"Hello Display() of Class A and set x=A"<<endl;
        x='A';
    }
    A()
    {
        cout<<"Hello Default Constructor() of Class A and set x=1"<<endl;
        x='1';
    }
    A(char a)
    {
        cout<<"Hello Para Constructor() of Class A and set x=a"<<endl;
        x=a;
    }
};
class B : virtual public X
{
    public:
    void display()
    {
        cout<<"Hello display () of Class B and set x=B"<<endl;
        x='B';
    }
    B()
    {
        cout<<"Hello Default Constructor() of Class B and set x=2"<<endl;
        x='2';
    }
    B(char b)
    {
        cout<<"Hello Para Constructor() of Class B and set x=b"<<endl;
        x=b;
    }
};

class C: public B, public A
{
    public:
    C(char a, char b) : A(a),B(b)
    {
        cout<<"Hello Constructor of Class C and print x==>"<<x<<endl;
    }
    
    void display()
    {
        cout<<"Hello display () of Class C and print x==>"<<x<<endl;
        
    }
};

int main()
{
    C obj('a','b');

    obj.display();

   
     obj.A::display();
     obj.display();

    obj.B::display();
    obj.display();


    
    return 0;
}