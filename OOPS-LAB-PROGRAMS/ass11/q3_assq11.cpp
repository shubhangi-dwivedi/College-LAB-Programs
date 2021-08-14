//Assignment : 11 (Object Pointer and Dynamic binding)
//3. WOOP over Circle (Base) , Cylinder (derived) class and implement Runtime Polymorphism over Area() function.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 08/04/21
*/

#include<iostream>

using namespace std;

class Circle 
{
    protected:
        float radius;

    public:
        Circle(float r)
        {
            radius=r;
        }

        virtual float Area()
        {
            float area;

            area= 3.14*radius*radius;

            return area;
        }
};

class Cylinder : public Circle
{
private:
    float height;
public:
    Cylinder(float r, float h) :  Circle(r)
    {
        height=h;
    }
 
    float Area() //overriding Area method
    {
        float a;

        a= (2*3.14*radius*radius) + (2*3.14*radius*height);

        return a;
    }
};

int main()
{
    Circle *ptr;

    Circle circleob(12);
    Cylinder cylob(12,4);

    ptr = &circleob;
    cout<<endl<<"Area of Circle : "<<ptr->Area();

    ptr = &cylob;
    cout<<endl<<"Area of Cylinder : "<<ptr->Area();

    return 0;
}