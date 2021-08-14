//Assignment 10 : Operator Overloading
//Part - B
//9. WOOP over Integer class for overloading pre --, post -- and logical && over the class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 01/04/21
*/

#include<iostream>
using namespace std;

class Integer
{
    private:
        int x;
    public:
        void getdata(int a) 
        {
            x=a;
        }
        void Show()  
        { 
            cout<<" = "<<x;
        }
        void operator --() //overloading prefix --
        {
            --x;
        }

        void operator --(int) //overloading postfix --
        {
            x--;
        }

        int operator &&(const Integer &a) //overloading &&
        {
            return this->x && a.x;
        }

};

int main()
{
    Integer I1,I2;
    I1.getdata(5);
    I2.getdata(1);
    
    --I1;
    cout<<"\nDECREMENT: (PRE)";
    I1.Show();
    cout<<endl;
    
    I2--;
    cout<<"\nDECREMENT: (POST)";
    I2.Show();
    cout<<endl;
    
    if(I1&&I2)
       cout<<"\nTrue";
    else
       cout<<"\nFalse";
    
    return(0);
}