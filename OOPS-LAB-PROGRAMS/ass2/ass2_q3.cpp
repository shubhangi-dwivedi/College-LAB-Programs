// Find difference between two dates (of possibly two different years) in days.

/* NAME: SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 07/01/21 */

#include<iostream>
using namespace std;

int main()
{
    int dd, mm, yyyy;
    int dd1, mm1, yyyy1;
    int dd2, mm2, yyyy2;

    cout<<"Enter first date : ";
    cin>>dd1;
    cout<<"\nEnter month : ";
    cin>>mm1;
    cout<<"\nEnter year : ";
    cin>>yyyy1;

    cout<<"\nEnter second date : ";
    cin>>dd2;
    cout<<"\nEnter month : " ;
    cin>>mm2;
    cout<<"\nEnter year : ";
    cin>>yyyy2;

    dd=dd1-dd2;
    mm=mm1-mm2;
    yyyy=yyyy1-yyyy2;

    if(dd<0)
    {
        mm--;
        dd+=30;
    }

    if (mm<0)
    {
        yyyy--;
        mm+=12;
    }

    cout<<"\nDifference in dates -  "<<dd<<" days  "<<mm<<" months  "<<yyyy<<" years  ";
    return 0;
}
