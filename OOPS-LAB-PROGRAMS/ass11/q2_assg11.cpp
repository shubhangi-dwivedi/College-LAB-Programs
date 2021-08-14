//Assignment : 11 (Object Pointer and Dynamic binding)
//2. WOOP over ABC (Base) , XYZ (derived) class for implementing Runtime Polymorphism.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 08/04/21
*/

#include<iostream>

using namespace std;

class ABC
{
    public:
        virtual void show()
        {
            cout<<"-----Show from base class (ABC)-----\n";
        }
};

class XYZ : public ABC
{
    public:
        void show()
        {
            cout<<"-----Show from derived class (XYZ)-----\n";
        }
};

int main()
{
    ABC *p;
    XYZ d_obj;

    p=&d_obj;

    p->show();

    return 0;
}
