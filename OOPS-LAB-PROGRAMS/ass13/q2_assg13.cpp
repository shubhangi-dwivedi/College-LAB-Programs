//Assignment : 13
//2. WOP with DISPLAY function Template Display two Values of generic type.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>

using namespace std;

template<class t1, class t2>
void display(t1 a, t2 b)
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    int a,b;
    float c,d;
    double x, y;

    cout<<"Input data : ";
    cin>>a>>c;
    cout<<"The data is : ";
    display(a,c);

    cout<<"Input data : ";
    cin>>a>>b;
    cout<<"The data is : ";
    display(a,b);

    cout<<"Input data : ";
    cin>>c>>d;
    cout<<"The data is : ";
    display(c,d);

    cout<<"Input data : ";
    cin>>x>>y;
    cout<<"The data is : ";
    display(x,y);

    cout<<"The data is : ";
    display('p','q');

    return 0;
}