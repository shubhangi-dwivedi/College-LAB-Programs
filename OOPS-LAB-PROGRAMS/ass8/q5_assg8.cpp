//Assignment : 8
//5. WOOP for implementing the concept of Function Overriding on simple class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 10/03/21
*/

#include<iostream>

using namespace std;

class ABC
{
    private:
        int x;
    public:
    
    void get()
    {
        cout<<"Enter value of Base class 'x' : ";
        cin>>x;
    }

    void Show()
    {
        cout<<"'x' from Base class : "<<x<<endl;
    }
};

class XYZ :public ABC
{
    private:
        int y;
    
    public:
        
        void get()
        {
            cout<<"Enter value of Derived class 'y' : ";
            cin>>y;
        }

        void Show1()
        {
            cout<<"'y' from Derived class : "<<y<<endl;
        }
};

int main()
{
    XYZ z;
    
    z.ABC::get();
    z.get();
    z.Show();
    z.Show1();

    return 0;
}