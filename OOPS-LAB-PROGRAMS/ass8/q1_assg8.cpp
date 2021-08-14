//Assignment : 8
/*1. WOOP for implementing Single Inheritance Over Base class (having
private and public D.M.) and derived it publicly in class (having 1 D.M.)
write operations of multiply all 3 D.M. in Derived class. */

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 04/03/21
*/

#include<iostream>

using namespace std;

class base
{
    private:
        int x;
    
    public:
        int y;

        base()
        {
            x=55;
            y=11;
        }

        int get_private()
        {
            return x;
        }
};

class derived : public base
{
    private:
        int z;
    
    public:

    derived()
    {
        z=10;
        base();
    }

    int multi()
    {
        return get_private()*y*z;
    }
    
};

int main()
{
    derived d;
    
    //x=55, y=11, z=10  &  x*y*z = 6050
    cout<<"Product of x, y, z = "<<d.multi();;

    return 0;
}

