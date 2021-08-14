//Assignment : 13
//3. WOP for SWAPPING two variables with each other.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>

using namespace std;

template<class t>
t Swap(t a, t b)
{
    t temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping input1 & input2 (resp.) : "<<a<<"\t"<<b<<endl;
}

int main()
{
    int a,b;
    float c,d;
    double x, y;
    char p,q;

    cout<<"Input data (int type) : ";
    cin>>a>>b;
    Swap(a,b);

    cout<<"Input data (float type) : ";
    cin>>c>>d;
    Swap(c,d);
    
    cout<<"Input data (double) : ";
    cin>>x>>y;
    Swap(x,y);

    cout<<"Input data (char) : ";
    cin>>p>>q;
    Swap(p,q);
}