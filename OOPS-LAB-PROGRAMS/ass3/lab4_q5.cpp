//5. WOOP in C++ with class Customer for storing and showing records of two customers

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/


#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

class customer
{
    private:
        int cid;
        char name[50], address[50];
        float amt;

    public:
        void read_data()
        {
            cout<<"Enter customer's id : ";
            cin>>cid;
            cout<<"Enter customer's name : ";
            fflush(stdin);
            gets(name);
            cout<<"Enter customer's address : ";
            cin.getline(address,50);
            cout<<"Enter the amount : ";
            cin>>amt;
        }

        void display_data()
        {
            cout<<"\nCustomer's id : "<<cid;
            cout<<"\nCustomer's name : ";
            puts(name);
            cout<<"\nCustomer's address : ";
            cout<<address;
            cout<<"\nThe amount is : "<<amt;
        }
};


int main()
{
    customer c1, c2;

    //Customer 1 : reading & displaying data
    c1.read_data();
    c1.display_data();

    //Customer 2 : reading & displaying data
    c2.read_data();
    c2.display_data();

    return 0;
}
