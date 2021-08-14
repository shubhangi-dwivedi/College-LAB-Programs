//Assignmenr : 8
//2.WOOP for Inheriting Same Base Class as previous example Privately in Derived Class and Implement same solution.

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

class derived : private base
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

