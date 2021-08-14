//Assignment 10 : Operator Overloading
//Part - A
//1. Overload Unary (--) and Binary (+,-) over Complex Class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 31/03/21
*/

#include<iostream>

using namespace std;

class Complex
{
    private:
        float real, img;

    public:
        Complex()
        {
            real=0;
            img=0;
        }

        Complex(float a, float b)
        {
            real=a;
            img=b;
        }

        void display()
        {
            cout<<"\nReal : "<<real<<"\nImaginary : "<<img<<endl;
        }


        Complex operator --() //prefix
        {
            Complex c;
            c.real=--real;
            c.img=--img;
        
            return c;
        }

        Complex operator +(Complex z)
        {
            Complex temp;
            temp.real=real+z.real;
            temp.img=img+z.img;

            return temp;
        }

        Complex operator -(Complex z)
        {
            Complex temp;
            temp.real=real-z.real;
            temp.img=img-z.img;

            return temp;
        }
};

int main()
{
    float a,b;

    cout<<"Enter REAL and IMAGINARY parts of complex no. (resp.) : ";
    cin>>a>>b;

    Complex c1(a,b);
    cout<<"\n*****c1*****";
    c1.display();

    Complex c2;
    c2=--c1;
    cout<<"\n*****c2(--c1)*****";
    c2.display();

    cout<<"\n-----Now c1 (updated)-----";
    c1.display();

    Complex c3;
    c3=c2+c1;
    cout<<"\n******c3 (c2+c1)*****";
    c3.display();
    
    Complex c4;
    c4=c1-c2;
    cout<<"\n******c4 (c1-c2)*****";
    c4.display();
    return 0;
}