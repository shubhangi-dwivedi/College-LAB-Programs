//Assignment 5 : (Function Overloading)

//5. WAP /WOOP in C++ over sum function to calculate sum of 2 int, 1 int- 1 float, 3 int, 1 double-1 int.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 04/02/21
*/

#include<iostream>

using namespace std;

class Sum
{
    public :
        int sum(int a,int b);
        int sum(int a,int b,int c);
        float sum(int a, float b);
        double sum(int a, double b);
};

//Sum of 2 integers
int Sum :: sum(int a,int b)
{
    return a+b;
}

//Sum of 3 integers
int Sum :: sum(int a,int b,int c)
{
    return a+b+c;
}

//sum of 1 integer and 1 float
float Sum :: sum(int a, float b)
{
    return a+(float)b;
}

//sum of 1 integer and 1 double
double Sum :: sum(int a, double b)
{
    return a+(double)b;
}

int main()
{
    Sum s;

    int ch;

    do
    {
        cout<<"\t\tEnter your choice\nTO CALULATE THE SUM\n1. Two integers\n2. Three integers\n3. One integer and one float\n4. one integer and one double\n5.EXIT\n-> ";
        cin>>ch;

        switch (ch)
        {
            case 1:
                int a1,b1;
                cout<<"Enter 2 integers to add : ";
                cin>>a1>>b1;
                cout<<"The sum of 2 integers is : "<<s.sum(a1,b1)<<endl;
                break;

            case 2:
                int a2,b2,c2;
                cout<<"Enter 3 integers to add : ";
                cin>>a2>>b2>>c2;
                cout<<"The sum of 3 integers is : "<<s.sum(a2,b2,c2)<<endl;
                break;

            case 3:
                int a3;
                float b3;
                cout<<"Enter one integer and one float value resp. : ";
                cin>>a3>>b3;
                cout<<"The sum of one integer and one float value is : "<<s.sum(a3,b3)<<endl;
                break;

            case 4:
                int a4;
                double b4;
                cout<<"Enter one integer and one double value resp. : ";
                cin>>a4>>b4;
                cout<<"The sum of one integer and one double value is : "<<s.sum(a4,b4)<<endl;
                break;
        
            case 5:
                cout<<"*****EXIT*****";
                break;

        default:
            cout<<"Wrong choice entered.....Enter correct input\n";
            break;
        }
        
    } while(ch!=5);
    

    return 0;
}