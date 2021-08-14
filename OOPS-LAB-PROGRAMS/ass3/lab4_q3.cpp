//3. WOOP in C++ to find power of one number over another number.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/


#include<iostream>
#include<cmath>

using namespace std;

class num
{
    private:
        int n,p;

    public:

        void read_data()
        {
            cout<<"Enter the number : ";
            cin>>n;
            cout<<"Enter the power : ";
            cin>>p;
        }

        void power()
        {
            cout<<"The result is : "<<pow(n,p);
        }
};

int main()
{
    num a;
    a.read_data();
    a.power();

    return 0;
}
