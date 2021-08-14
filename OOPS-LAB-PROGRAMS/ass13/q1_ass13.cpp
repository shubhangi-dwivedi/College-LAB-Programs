//Assignment : 13
//1. WOP with generic SUM function for summation of int, double, float etc.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>

using namespace std;

template<class t>
t sum(t a, t b)
{
    return (a+b);
}

int main()
{
    int a,b;
    float c,d;
    double x, y;

    cout<<"Input data : ";
    cin>>a>>b;
    cout<<"Sum is : "<<sum(a,b)<<endl;

    cout<<"Input data : ";
    cin>>c>>d;
    cout<<"Sum is : "<<sum(c,d)<<endl;
    
    cout<<"Input data : ";
    cin>>x>>y;
    cout<<"Sum is : "<<sum(x,y)<<endl;


    cout<<"Sum is : "<<sum(45.3333,76.984)<<endl;
    cout<<"Sum is : "<<sum('p','q')<<endl;

    return 0;
}