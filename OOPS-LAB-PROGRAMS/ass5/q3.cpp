//Assignment 5 : (inline function)
//3. (WOOP/WAP) in C++ to implement inline function for calculation of power,find avg. of two variables, cube (default agr) of a variable.

/*NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 04/02/21
*/

#include<iostream>
#include<cmath>

using namespace std;  

class var
{
    public:
        int power(int num, int p);
        int number_avg(int x , int y );
};

inline int var :: power(int num, int p=3)
{
    return pow(num,p);
}

inline int var :: number_avg(int x, int y)
{
    return (x+y)/2;
}


int main()
{
    var v;

    int ch;

    do
    {
        cout<<"Enter your choice : \n1.Calculation of power\n2.Avg. of 2 nos.\n3.Cube of a no.\n4.EXIT\n-> ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                int num,p;
                cout<<"Enter the number :";
                cin>>num;
                cout<<"Enter the power : ";
                cin>>p;
                cout<<"Result of calculation of power : "<<v.power(num,p)<<endl;
                break;
            
            case 2:
                int x,y;
                cout<<"Enter no. 1 & 2 resp. : ";
                cin>>x>>y;
                cout<<"Avg. of two no. is : "<<v.number_avg(x,y)<<endl;
                break;

            case 3:
                int c;
                cout<<"Enter no. to calc. its cube : ";
                cin>>c;
                cout<<"Cube of the no. is : "<<v.power(c)<<endl;
                break;

            case 4:
                cout<<"*****EXIT*****";
                break;

            default:
                cout<<"Wrong choice entered.....Enter correct input\n";
        }

    } while (ch!=4);
    

    return 0;
}
