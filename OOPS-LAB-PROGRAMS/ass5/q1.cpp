//Assignment-5 (Implementing Data Structures using C++ OOP)
//1. WOOP to Implement Stack with its basic operations

/*NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 03/02/21
*/

#include<iostream>

using namespace std;
const int MAX=10;

class Stack
{
    private :
        int stk[MAX], top;

    public :
        void init()
        {
            top=-1;
        }

        void push(int x);
        int pop();
        int underflow();
        int overflow();
        int Size();
        void display();
};

void Stack :: push(int x)
{
    if(overflow()==1)
    {
        cout<<"*****Stack Overflow*****";
    }
    else
    {
        stk[++top]==x;
    }
}

int Stack :: pop()
{
    int del_ele;

    if(underflow()==1)
    {
        cout<<"*****Stack Underflow*****";
        return -1;
    }

    del_ele = stk[top--];
    return del_ele;
}

int Stack :: underflow()
{
    if(top<0)
    {
        return 1;
    }

    return 0;
}

int Stack :: overflow()
{
    if( top == MAX-1 )
    {
        return 1;
    }

    return 0;
}
        
int Stack :: Size()
{
    return top+1;
}

void Stack :: display()
{

    if(underflow()==1)
    {
        cout<<"\nStack Underflow~~~~~~NO element in the stack\n";
    }
    else
    {
        cout<<"ELEMENTS IN STACK ARE : ";
        for(int i=top ; i>=0 ; i--)
        {
            cout<<stk[i]<<" ";
        }
    }
    
}

int main()
{
    Stack s;
	s.init();

    int ch,x,t;

    do
    {
        cout<<"Enter your choice :\n1.PUSH in STACK\n2.POP from STACK\n3.Check SIZE of the STACK\n4.DISPLAY stack\n5.EXIT\n-> ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter the element to be PUSHED in stack : ";
            cin>>x;
            s.push(x);
            cout<<endl;
            break;

        case 2:
            t=s.pop();
            cout<<"POPPED element from the stack is : "<<t<<endl;
            break;
        
        case 3:
            cout<<"SIZE of the stack is : "<<s.Size()<<endl;
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout<<"~~~~~~~~EXIT~~~~~~~~~";
            break;
        
        default:
            cout<<"Wrong CHOICE entered.....enter correct CHOICE"<<endl;
            break;
        }
    } while (ch!=5);

    return 0;

}

