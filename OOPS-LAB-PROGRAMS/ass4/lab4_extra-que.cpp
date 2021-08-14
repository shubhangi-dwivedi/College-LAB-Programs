//3. WOOP in c++ with class act (account) with attributes acno, achodlers name, add, mob, amount
/*
i. Reading account info (Read, [AutoGen. acno if possible])
ii. Printing account info (show in table format)
iii. Deposit amount in account (after Deposit show updated amount
also)
iv. Withdraw amount from account (same operation as deposit)
v. Interest calculation (3.75 %, 1 month)
vi. Update Account Info (except - acno,amount )
*/

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 21/01/21
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class account_info
{
    private:
        double acc_no, amt;
        char acc_holder_name[50], add[50], ph_no[10];

    public:
        void read_data();

        void display();

        double deposit();

		double withdraw();

        void interest();

        void update();

};

void account_info :: read_data()
{
    cout<<"Enter Account holder's name : ";
    fflush(stdin);
    gets(acc_holder_name);

    cout<<"Enter Account holder's phone no. : ";
    fflush(stdin);
    gets(ph_no);

    cout<<"Enter Account holder's address : ";
    fflush(stdin);
    gets(add);

    srand(time(0));
    acc_no=rand();

    cout<<"The account no. is : "<<acc_no;

    cout<<"\nEnter the amount present in account : ";
	cin>>amt;
}

void account_info :: display()
{
    cout<<"Account holder's name : "<<acc_holder_name;
    //or, puts(acc_holder_name);

    cout<<"\nAccount holder's phone no. : "<<ph_no;
    //or, puts(ph_no);

    cout<<"Account holder's address : "<<add;
    //or, puts(add);

    cout<<"\nThe account no. is : "<<acc_no;

    cout<<"\nThe amount present in account : "<<amt;
}

double account_info::deposit()
{
	double deposit;

	cout<<"Enter amount you want to deposit : ";
	cin>>deposit;
	if(deposit>500000)
    {
        cout<<"Can't deposit above 500000 in one go";
    }
    else
    {
        amt=amt+deposit;
    }

    return amt;
}

double account_info::withdraw()
{
	double withdraw;

    cout<<"Enter Withdrawal amount : ";
    cin>>withdraw;
	if(withdraw>amt)
    {
        cout<<"*****Don't have enough money in your account*****";
        return 0;
    }
    else
    {
        amt=amt-withdraw;
        return amt;
    }
}

void account_info :: interest()
{
    float r=3.35, t, si;

    cout<<"Enter time period (in months) : ";
    cin>>t;

    si=(t*r*amt)/100;

    cout<<"Your simple interest is : "<<si<<"\n";
}

void account_info :: update()
{
    int ch;

    cout<<"Do you want to update acc. holder's name \n1.YES\n2.NO\n";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter Account holder's name : ";
        fflush(stdin);
        gets(acc_holder_name);
    }
    cout<<"Account holder's name : ";
    puts(acc_holder_name);

    cout<<"Do you want to update acc. holder's phone no. \n1.YES\n2.NO\n";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter Account holder's phone no. : ";
        fflush(stdin);
        gets(ph_no);
    }
    cout<<"\nAccount holder's phone no. : ";
    puts(ph_no);

    cout<<"Do you want to update acc. holder's address \n1.YES\n2.NO\n";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Account holder's address : ";
        puts(add);
    }
    cout<<"Account holder's address : ";
    puts(add);
}


int main()
{
    account_info a;
    a.read_data();

    int ch,wd,dp;

    do
    {
        cout<<"\n1.Display\n2.Withdraw\n3.Deposit\n4.Interest checking\n5.Update account info. \n6.EXIT\n -> ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                a.display();
                break;
            case 2:
                wd=a.withdraw();
                cout<<"Amount left in account after withdrawal : "<<wd;
                break;
            case 3:
                dp=a.deposit();
                cout<<"Amount in account after depositing the money : "<<dp;
                break;
            case 4:
                a.interest();
                break;
            case 5:
                cout<<"*******Update Account holder's info.********";
                a.update();
                break;
            default:
                cout<<"Wrong input EXIT ";
                exit(0);
        }

    }while(ch!=0);

    return 0;
}
