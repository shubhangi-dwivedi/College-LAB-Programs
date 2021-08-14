//2.Program to separate decimal and integer part of given floating point number.
/* NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 6/01/21 */

#include<iostream>

using namespace std;

int main()
{
    double n;
    cout<<"Enter a float no. : ";
    cin>>n;
    int i;
    i=n;
    n=n-i;
    cout<<"Integer part of no. is : "<<i<<"\n"<<"Decimal part of no. is : "<<n;
    return 0;
}
