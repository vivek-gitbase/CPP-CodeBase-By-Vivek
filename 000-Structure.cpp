// C program with structure static member
#include<iostream>
using namespace std;

struct Record {
	static int x;
};


int Record::x=0;

// Driver program
int main()
{
    Record r1,r2;


    r1.x=100;
    cout<<r1.x<<endl;
    cout<<r2.x<<endl;

    r1.x=200;
    cout<<r1.x<<endl;
    cout<<r2.x<<endl;

    return 0;

}
