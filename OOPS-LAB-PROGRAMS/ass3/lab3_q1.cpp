//1. WOOP in C++ to find factorial, even-odd check, negative-positive check on number.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/

#include<iostream>

using namespace std;

class number
{
    private:
        int n;

    public:
        void read_data()
        {
            cout<<"Enter the no. : ";
            cin>>n;
            cout<<endl;
        }

        void factorial()
        {
            int f=1;
            for(int i=1;i<=n;i++)
            {
                f=f*i;
            }
            cout<<"\nFactorial of the given no. "<<n<<" is : "<<f<<"\n\n";
        }

        void even_odd()
        {
            if(n%2==0)
            {
                cout<<"\nThe given no. "<<n<<" is EVEN.\n\n";
            }
            else
            {
                cout<<"\nThe given no. "<<n<<" is ODD.\n\n";
            }
        }

        void negative_sign()
        {
            if(n>=0)
            {
                cout<<"\nThe given no. "<<n<<" is POSITIVE.\n\n";
            }
            else
            {
                cout<<"\nThe given no. "<<n<<" is NEGATIVE.\n\n";
            }
        }
};

int main()
{
    int ch;
    number a;
    a.read_data();

    do
    {
        cout<<"Enter your choice :\n1.FACTORIAL OF GIVEN DATA\n2.TO CHECK NO. IS EVEN/ODD\n3.TO CHECK NO. IS POSITIVE OR NEGATIVE\n4.EXIT\n-> ";
        cin>>ch;

        switch (ch)
        {
            case 1:
                a.factorial();
                break;
            case 2:
                a.even_odd();
                break;
            case 3:
                a.negative_sign();
                break;
            default:
                cout<<"\n*****WRONG CHOICE.....EXIT.....*****\n";
                exit(0);
        }
    }while(ch>0&&ch<5);
    return 0;
}
