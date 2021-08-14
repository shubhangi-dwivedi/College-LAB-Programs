//Assignment 09
//Hybrid Inheritance
//3. WOOP hybrid Inheritance Over Student - > Test ->Result and Student - > Sports - > Result class, implement Virtual Base Class Concept.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 17/03/21
*/

#include<iostream>

using namespace std;

class student
{
    private:
        char name[20];

    protected:
        int rollno;
    
    public:
        void getdata()
        {
            cout<<"Enter name of student: ";
            gets(name);
            //cin.ignore();
            cout<<"Enter roll no. of student: ";
            cin>>rollno;
        }

        void putdata()
        {
            cout<<"Name of student: "<<name<<endl;
            cout<<"Roll no. of student: "<<rollno<<endl;
        }
};

class test: public virtual student
{
    protected:
        float m1,m2,m3,m4;
    
    public:
        void getmarks()
        {
            cout<<"Enter marks of four subjects (out of 100 resp.): "<<endl;
            cin>>m1>>m2>>m3>>m4;
        }

        void putmarks()
        {
            cout<<"Marks of subject 1: "<<m1<<endl;
            cout<<"Marks of subject 2: "<<m2<<endl;
            cout<<"Marks of subject 3: "<<m3<<endl;
            cout<<"Marks of subject 4: "<<m4<<endl;
        }
};

class Sports : public virtual student
{
    protected:
        int sscore;
        int noofdays; // 40 Stand Session >30 Score = 10 <30 Score = 5
    
    public:
        void GetScore()
        {
            cout<<endl<<"No of days student is present: ";
            cin >>noofdays;
            if (noofdays >30)
            sscore = 10;
            else if (noofdays >10)
            sscore = 5;
            else
            sscore=0;
        }

        void ShowScore()
        {
            cout<<endl<<"Sports Grade of Student: ";
            cout<<sscore<<endl;
        }
};

class result: public test,public Sports
{
    protected:
        float total,per;
    
    public:
        void cal()
        {
            total=m1+m2+m3+m4+sscore;
            per=((total/400)*100);
        }
        void display_res()
        {
            putdata();
            putmarks();
            ShowScore();
            cout<<"Total: "<<total<<endl;
            cout<<"Percentage: "<<per<<endl;
        }
};

int main()
{
    result res;
    res.getdata();
    res.getmarks();
    res.GetScore();
    res.cal();
    res.display_res();
    return 0;
}
