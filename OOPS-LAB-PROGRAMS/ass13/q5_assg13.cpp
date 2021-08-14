//Assignment : 13
//5. WOOP for Calculator Class for performing Mathematical operations over Different Datatypes.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>
#include<cmath>

using namespace std;

template <class t>
class calculator
{
    private:
        t num1, num2;
    
    public:
        calculator(t n1, t n2)
        {
            num1=n1;
            num2=n2;
        }

        void display()
        {
            cout<<"No. are : "<<num1<<"\t"<<num2<<endl;
            cout<<"Addition result : "<<add()<<endl;
            cout<<"Subtraction result : "<<sub()<<endl;
            cout<<"Product result : "<<multi()<<endl;
            cout<<"Division result : "<<divide()<<endl;
            cout<<"Power N1^N2 : "<<expo()<<endl;
        }

        t add()
        {
            return num1+num2;
        }

        t sub()
        {
            return num1-num2;
        }

        t multi()
        {
            return num1*num2;
        }

        t divide()
        {
            return num1/num2;
        }

        t expo()
        {
            return pow(num1,num2);
        }
};

int main()
{
    int x,y;
    cout<<"Enter no. 1 & 2 (int type) : ";
    cin>>x>>y;

    calculator <int> c1(x,y);
    c1.add();
    c1.sub();
    c1.multi();
    c1.divide();
    c1.expo();
    c1.display();


    float a,b;
    cout<<"Enter no. 1 & 2 (int type) : ";
    cin>>a>>b;

    calculator <float> c2(a,b);
    c2.add();
    c2.sub();
    c2.multi();
    c2.divide();
    c2.expo();
    c2.display();


    return 0;
}