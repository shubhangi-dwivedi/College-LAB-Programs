//6. WAP in C++ Test use of reference variable over basic datatype.(int,double,char)

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    double b;
    char c;

    int &x= a;
    double &y= b;
    char &z= c;

    int &t=b;
//or,
   // int &t=c; //not possible 

    cout<<"Enter value of a , b ,c resp. : ";
    cin>>a>>b>>c;

    cout<<"a : "<<a<<"\nb : "<<b<<"\nc : "<<c;

    cout<<"\n&a : "<<&a<<"\n&b : "<<&b<<"\n&c : "<<c;

    cout<<"\nx : "<<x<<"\ny : "<<y<<"\nz : "<<z;

    cout<<"\n&x : "<<&x<<"\n&y : "<<&y<<"\n&z : "<<&z;

    //cout<<"\nt : "<<t<<"\n&t : "<<&t;

    return 0;
}