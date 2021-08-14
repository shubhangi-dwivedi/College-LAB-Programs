//1. WOOP C++ with class Array and write a program to sort, search within array.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
Date : 27/01/21
*/

#include<iostream>

using namespace std;

class arr
{
    private:
        int a[50],n;
    
    public:
        void read()
        {
            cout<<"\nEnter the size of the array : ";
            cin>>n;

            cout<<"\nEnter array elements : ";
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            cout<<endl;
        }
        void search();
        void sort_array();
        void display()
        {
            cout<<"The array is : ";

            for(int i =0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};

void arr::search()
{
    int ele;

    cout<<"\nEnter the element you want to search in the array : ";
    cin>>ele;

    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            cout<<"Element found at "<<i+1<<" position";
            break;
        }
    }
    cout<<endl;
}

void arr::sort_array()
{
    int temp,flag=1;

    cout<<"\nPerforming BUBBLE SORT ";
	for(int i=1;i<n&&flag==1;i++)
	{
	    flag=0;
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
	}
    cout<<"\nSORTED ARRAY is : ";
    display();
    cout<<endl;
}

int main()
{
    arr a1;
    a1.read();

    int ch;

    do
    {
        cout<<"Enter the your choice :\n1.DISPLAY\n2.SEARCH AN ELEMENT IN THE ARRAY\n3.SORT THE GIVEN ARRAY\n4.EXIT\n ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            a1.display();
            break;
        
        case 2:
            a1.search();
            break;

        case 3:
            a1.sort_array();
            break;

        case 4:
            cout<<"*****EXIT*****";
            exit(0);

        default:
            cout<<"\nWrong CHOICE enter correct choice\n";
            break;
        }
    } while (ch!=4);
    
    return 0;
}