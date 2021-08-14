//Assignment : 12
//PART: A (IOS and Manipulators)
//1. WOOP for implement all 5 IOS function and Manipulators.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 14/04/21
*/

#include<iostream>
#include<iomanip>

using namespace  std;

class ios_func_manip
{
    private:
        float i;
    
    public:
        void get()
        {
            cout<<"Enter a number: ";
            cin>>i;
        }

        void show_func()
        {
            cout<<"-------5 formatted IOS functions--------\n";

            cout.width(10);
            cout.precision(5);
            cout.fill('*');
            cout.setf(ios::left);
            cout<<i<<endl;

            cout.unsetf(ios::left);
            cout<<i<<endl;

            cout<<endl;
        }

        void show_manip()
        {
            cout<<"-------- 5 Manipulators--------"<<endl;
            cout<<setw(7)<<setprecision(4)<<setfill('*')<<setiosflags(ios::left);
            cout<<i<<endl;
            cout<<resetiosflags(ios::left)<<i<<endl;
        }
};

int main()
{
    ios_func_manip a;
    a.get();
    a.show_func();
    a.show_manip();

    return 0;
}