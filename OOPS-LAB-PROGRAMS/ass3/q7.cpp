//7. WAP in C++ using Reference Variable to array and print value of all index using Reference Variable.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/


#include<iostream>

using namespace std;

int main()
{
    int a[10] , n;

    cout<<"Enter array size : ";
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    int &ref=a[0];

    for(int i =0;i<n ;i++)
    {
        cout<<*(&ref+i)<<" ";
    }

   return 0; 
} 
