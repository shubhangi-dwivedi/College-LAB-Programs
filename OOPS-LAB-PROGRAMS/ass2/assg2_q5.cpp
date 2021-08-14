//Pointer as an dynamic array to hold 10 values and print same values in reverse order.

/* NAME: SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 07/01/21 */

#include<iostream>
#include<malloc.h>

using namespace std;

int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int)*10);

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    for(int i =0; i<n;i++)
    {
        cin>>*(ptr+i);
    }


    //method 1 (printing array in reverse order)
    for(int j=n-1;j>=0;j--)
    {
        cout<<*(ptr+j)<<" ";
    }

    return 0;
}
