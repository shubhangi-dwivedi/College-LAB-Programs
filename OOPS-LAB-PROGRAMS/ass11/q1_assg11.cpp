//Assignment : 11 (Object Pointer and Dynamic binding)
//1. WOOP using object pointer over student class for holding and printing data of n students.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 07/04/21
*/

#include<iostream>
#include<cstring>


using namespace std;


class student
{
    private:
        char name[50];
        int rollno;
    public:
        void getdata(char const *a, int roll)
        {
            strcpy(name, a);
            rollno = roll;
        }
        
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll Number : "<<rollno<<endl;
        }
};


int main()
{
    int n;
    cout<<"Enter no. of records you want to enter : ";
    cin>>n;

    student *s = new student[n];
    student *s1 = s;

    char a[50]; 
    int roll;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the Name "<<i+1<<" : ";
        cin>>a;
        cout<<"Roll No. of Student "<<i+1<<" : ";
        cin>>roll;
        s->getdata(a, roll);
        s++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<"\nStudent "<<i+1<<" : "<<endl;
        s1->display();
        s1++;
    }

    return 0;
}