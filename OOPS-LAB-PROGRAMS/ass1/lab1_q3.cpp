/*Program To calculate and print the electricity bill when the condition of meter reading are:
units less than 1002.25,
100-200  3.00,
200-5004.25
and above that 7.00Rs. */

/* NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 6/01/21 */


#include<iostream>

using namespace std;

int main()
{
    float n;
    cout<<"Enter the value of meter reading : ";
    cin>>n;

    float amt;
    if(n<100)
    {
        amt=n*2.25;
    }
    else if(n>=100&&n<200)
    {
        amt=n*3.00;
    }
    else if(n>=200&&n<500)
    {
        amt=n*4.45;
    }
    else
    {
        amt=n*7.00;
    }

    cout<<"Electricity bill is : Rs. "<<amt;
    return 0;
}
