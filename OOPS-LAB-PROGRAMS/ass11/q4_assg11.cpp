//Assignment : 11 (Object Pointer and Dynamic binding)
//4. WOOP over Media (Base ) Book (Derived) Tape (Derived) for implementing Runtime Polymorphism over pure virtual function Display() function.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 08/04/21
*/

#include <iostream>
#include <cstring>

using namespace std;

class media 
{
    protected:
        char nm[10];
        int id;

    public:
        media(char z[],int y)
        {
            strcpy(nm,z);
            id=y;
        }
        
        virtual void Display()=0;  //Pure Virtual Function
};

class Book : public media
{
    protected:
        int pages;
    public:
        Book(char z[],int y,int x):media(z,y)
        {
            pages=x;
        }
    
        void Display()
        {
            cout<<endl<<"Name of Book:"<<nm;
            cout<<endl<<"ID of Book:"<<id;
            cout<<endl<<"Pages in Book:"<<pages;
        }
};

class Tape : public media
{
    protected:
        int time;
    
    public:
        Tape(char z[],int y,int x):media(z,y)
        {
            time=x;
        }
    
        void Display()
        {
            cout<<endl<<"Name of Tape:"<<nm;
            cout<<endl<<"ID of Tape:"<<id;
            cout<<endl<<"Time of tape:"<<time;
        }
};


int main()
{
    media *m[2];

    m[0]=new Book("C++",1234,350);
    m[0]->Display();

    cout<<endl;

    m[1]=new Tape("ABCD2",382,2);
    m[1]->Display();

    return 0;
}