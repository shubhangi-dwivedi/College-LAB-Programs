//hierarchical inheritance
//shape -> rectangle
//shape -> triangle

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 18/03/21
*/

#include<iostream>

using namespace std;

class shape
{
    protected:
        float b,h;
    public:
        void get(float x, float y)
        {
            b=x;
            h=y;
        }
        void show()
        {
            cout<<"Values of b & h is : \n";
            cout<<"b = "<<b<<endl;
            cout<<"h = "<<h<<endl;
        }
};

class rectangle : public shape
{
    protected:
        float area, perimeter;
    public:
        void r_area()
        {
            area= b * h;
        }
        void r_perimeter()
        {
            perimeter= 2 * (b + h);
        }
        void r_show()
        {
            cout<<"Area of rectangle is : "<<area<<endl;
            cout<<"Perimeter of rectangle is : "<<perimeter<<endl;
        }
};

class triangle : public shape
{
    protected:
        float area;
    public:
        void t_area()
        {
            area= 0.5 * b * h;
        }
        void t_show()
        {
            cout<<"Area of triangle is : "<<area<<endl;
        }
};


int main()
{
    float b,h;

    rectangle r;
    cout<<"Enter value of b & h resp. (in rectangle b=base, h=height or length) : ";
    cin>>b>>h;
    r.get(b,h);
    r.show();
    r.r_area();
    r.r_perimeter();
    r.r_show();

    triangle t;
    cout<<"Enter value of b & h resp. (in triangle b=base, h=height) : ";
    cin>>b>>h;
    t.get(b,h);
    t.show();
    t.t_area();
    t.t_show();

    return 0;
}