//2. WOOP in C++ to check greater of two number and also find GCD of given numbers.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 20/01/21
*/


#include<iostream>

using namespace std;

class A
{
    private:
        int x,y;

    public:
        void read_data()
        {
            cout<<"Enter the value of x : ";
            cin>>x;
            cout<<"Enter the value of y : ";
            cin>>y;
        }

        void greater()
        {
            if(x>y)
            {
                cout<<"\nx is grater than y\n";
            }
            else if(x<y)
            {
                cout<<"\ny is greater than x\n";
            }
            else
            {
                cout<<"\nBoth x and y are EQUAL\n";
            }
        }

        void gcd()
        {
            do
            {
                 if(x>y)
                {
                    x=x-y;
                }
                else
                {
                    y=y-x;
                }
            }while(x!=y);

            if(x==y)
                {
                    cout<<"\nGCD of the given nos. is : "<<x<<endl;
                    exit(0);
                }
        }
};


int main()
{
    A a1;
    a1.read_data();

    int ch;

    do
    {
        cout<<"Enter your choice :\n1.Greater of two nos.\n2.GCD of two nos.\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                a1.greater();
                break;
            case 2:
                a1.gcd();
                break;
            default:
                cout<<"*****WRONG INPUT....EXIT*****";
                exit(0);
        }
    }while(ch!=3);

    return 0;
}
