
#include<iostream>
using namespace std;

// class and structure is interchangeable
struct Record {
    public:
	int x,y,z;

	Record ()
	{   cout<<"Hi I'am constructor () of "<<this<<" \nenter x,y,z ";
        cin>>x>>y>>z;
        x=x+5;
        y=y+5;
        z=z+5;

       /*
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;

        */
	}

	~Record()
	{
        cout<<"Hi I'am destructor () of "<<this<<endl;
	}
};




// Driver program
int main()
{
    Record r1,r2;



    cout<<"Value x "<<r1.x<<endl;
    cout<<"Value y "<<r1.y<<endl;
    cout<<"Value z "<<r1.z<<endl;

    cout<<"Sizeof Object is "<<sizeof(r1)<<" Bytes"<<endl;

    cout<<"Bye!!! Main ()\n";
    return 0;

    cout<<"Bye!!! Main - after return";

}
