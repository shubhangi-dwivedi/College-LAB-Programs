//Find 2nd highest element of an Array.

/* NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 7/01/21 */

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;


    //method 1
	for(int i=0;i<n-1;i++)  //sorting the given array
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"2nd largest element is : "<<a[1];
    return 0;

    //method 2(just a try...not correct)
    /*vector<int> v;
    int val;
    for(int i =0;i<n;i++)
    {
        v.insert(v.begin()+i,val);
    }
    reverse(v.begin(),v.end());
    cout<<"The given sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    cout<<"\nThe second largest element is : "<<v[2];
    return 0;*/
}
