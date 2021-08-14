#include<iostream>

using namespace std;

class class1
{
    private:
        int a;
    public:
        int b;
        void get()
        {
            cout<<"Enter a & b: ";
            cin>>a>>b;
        }
        void get_a()
        {
            cout<<"Enter a: ";
            cin>>a;
        }
        void show()
        {
            cout<<"A & B: "<<a<<b;
        }

}

int main()
{


    return 0;
}