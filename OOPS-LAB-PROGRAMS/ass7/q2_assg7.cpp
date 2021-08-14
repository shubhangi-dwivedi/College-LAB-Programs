//Assignment : 7
//2. WOOP with Complex class for implementing Default Cons. and Parameterized Cons. for storing and printing complex number.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>

using namespace std;

class complex
{
    private:
	    float real,img;

	public:
		complex()              //default const.
		{ 
            real=img=0;
		}

		complex(float x, float y)  //parameterized const.
		{
            real=x;
            img=y;
		}

		void display()
		{
			cout<<"Complex No. is : ";
			cout<<real<<" + i"<<img<<"\n";
		}
};

int main()
{
	complex c1; //default cons.
	c1.display(); 

    float a,b;

    cout<<"Enter real and imaginary (resp.) of Complex no. : ";
    cin>>a>>b;
	complex c2(a,b); //parameterized cons.
	c2.display();

    cout<<"Enter real and imaginary (resp.) of Complex no. : ";
    cin>>a>>b;
	complex c3(a,b); //parameterized cons.
	c3.display();

    return 0;
}

