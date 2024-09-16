#include<iostream>
using namespace std;

class ABC
{
    private:
    int x=0;
    public:
    friend void fun(ABC);
};

void fun(ABC obj)
{   ABC obj2;
    obj.x=10;
    obj2.x=20;

    cout<<obj.x<<endl;
    cout<<obj2.x; 
}


int main()
{
    ABC obj;
    // obj.x=10;


    // cout<<obj.x<<endl;
    fun(obj);
    return 0;
}