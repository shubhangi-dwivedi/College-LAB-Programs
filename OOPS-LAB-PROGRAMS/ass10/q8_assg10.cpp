//Assignment 10 : Operator Overloading
//Part - B
//8. WOOP over Array class for overloading >>, << , [] operator on the class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 31/03/21
*/

#include<iostream>

using namespace std;

#define n 5

class Array
{
    private:
        int a[n];

    public:
        Array()
        {
            register int i;

            for(int i=0;i<n;i++)
                a[i]=i;
        }

        int &operator [](int i)
        {
            if(i>n-1)
            {
                cout<<" ------Index out of bounds------\n"<<endl;
                return a[0];
            }
            return a[i];
        }

        friend void operator >>(istream &y,Array &z)
        {
            for(int i=0;i<n;i++)
                y>>z.a[i];
        }

        friend void operator <<(ostream &y,Array z)
        {
            for(int i=0;i<n;i++)
                y<<"\t"<<z.a[i];
        }

        void showdata()
        {
            cout<<"The array is : ";
            for(int i=0;i<n;i++)
                cout<<"\t"<<a[i];
            
            cout<<endl<<endl;
        }
};

int main()
{
    Array a1,a2;

    //n=5
    //a1
    cout<<"Value of a[2] : "<<a1[2]<<endl;
    cout<<"Value of a[5] : "<<a1[4]<<endl;
    cout<<"Value of a[12] : "<<a1[12]<<endl<<endl;
    a1.showdata();

    //a2
    cout<<"Input a array elements : ";
    cin>>a2; // overloading >>
    cout<<"*****Overloading << (output)***** \nArray is : ";
    cout<<a2; // overloading <<
    cout<<endl;

    return 0;

}