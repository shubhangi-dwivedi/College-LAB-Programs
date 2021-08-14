//hierarchical inheritance
//Employee -> manager
//Employee -> worker

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 18/03/21
*/

#include<iostream>

using namespace std;

class employee
{
    protected:
        char name[20];
        int ID;
        int age;
    
    public:
        void get()
        {
            cout<<"Enter employee's name : ";
            cin>>name;
            cout<<"Enter employee ID : ";
            cin>>ID;
            cout<<"Enter employee's age : ";
            cin>>age;
        }
        
        void show()
        {
            cout<<"Employee's name : "<<name<<endl;
            cout<<"Eemployee ID : "<<ID<<endl;
            cout<<"Employee's age : "<<age<<endl;
        }
};

class manager : public employee
{
    protected:
        char qlf[20];
        int basic, salary;
    public :
        void get_m()
        {
            cout<<"Enter Manager's qualifications : ";
            cin>>qlf;
            cout<<"Enter employee's basic : ";
            cin>>basic;
        }
        void cal_salary()
        {
            int noofdays;
            cout<<"No. of days worked : ";
            cin>>noofdays;
            salary= basic * 1.17 * noofdays;
            cout<<"\nThe salary of Manager is : "<<salary<<endl;
        }
        void show_m()
        {
            cout<<"Manager's qualifications : "<<qlf<<endl;
            cout<<"Manager's basic : "<<basic<<endl;
            cout<<"The salary of Manager is : "<<salary<<endl;
        }
};

class worker : public employee
{
    protected:
        int noofhours;
        int wage;
        float total_wage;
    public:
        void get_w()
        {
            cout<<"No. of hours worked : ";
            cin>>noofhours;
            cout<<"Enetr wage per hour : ";
            cin>>wage;
        }
        void calc_wage()
        {
            total_wage = wage * noofhours;
            cout<<"Per day wage of worker is : "<<total_wage;
        }
        void show_w()
        {
            cout<<"Wage per hour of worker : "<<wage<<endl;
            cout<<"No. of hours worked : "<<noofhours<<endl;
            cout<<"Worker's wage per day : "<<total_wage<<endl;
        }
};

int main()
{
    manager m;
    m.get();
    m.get_m();
    m.cal_salary();
    m.show();
    m.show_m();

    worker w;
    w.get();
    w.get_w();
    w.calc_wage();
    w.show();
    w.show_w();

    return 0;
}