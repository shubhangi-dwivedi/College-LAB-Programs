//Assignment 09
//Multiple Inheritances:
//1. WOOP over Alpha - Beta ->Gamma class for implementing multiple Inheritance. (Constructor of Derived class).

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 17/03/21
*/

#include<iostream>

using namespace std;

class Alpha
{
    private:
        int x;

    public:
        Alpha(int a)
        {
            x=a;
            cout<<"\nAlpha initialized\n";
        }

        void show_x()
        {
            cout<<"x = "<<x<<"\n";
        }
};

class Beta
{
    private:
        float y;
    
    public:
        Beta(float b)
        {
            y=b;
            cout<<"\nBeta initialized\n";
        }

        void show_y()
        {
            cout<<"y = "<<y<<"\n";
        }
};

class Gamma : public Alpha, public Beta
{
    private:
        int p,q;
    
    public:
        Gamma(int a, float b, int c, int d): Alpha(a), Beta(b)
        {
            p=c;
            q=d;

            cout<<"\nGamma initialized\n";
        }

        void show_pq()
        {
            cout<<"p = "<<p<<"\n"<<"q = "<<q<<"\n";
        }

};

int main()
{
    Gamma g(5,10.75,20,30);

    cout<<"\n";

    g.show_x();
    g.show_y();
    g.show_pq();

    return 0;
}