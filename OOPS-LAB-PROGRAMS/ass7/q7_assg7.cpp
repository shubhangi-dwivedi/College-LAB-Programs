//Assignment : 7
//7. WOOP for implementing Local Class and Inner Class Concepts.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>

using namespace std;

class person //Global Class
{
    private:
	    char name[20];
	
    public:
	
    class address //Inner or Nested Class
	{
		public:
			int hno;
			char strt[20];
			char city[20];
			void show1();
	};
	address add;

	void getdata()
	{
		cout<<"Enter Name of the person: ";
		gets(name);
		cout<<"Enter address of the person (house no. , street, city resp.): "<<endl;
		cin>>add.hno;
		gets(add.strt);
		gets(add.city);
	}

	void Show()
	{
		cout<<"\n*****Displaying*****\nName : "<<name<<endl<<"address(Hno, Street, City:)"<<add.hno<<" "<<add.strt<<" "<<add.city;
	}
};

void person::address::show1()
{
    cout<<hno;
    cout<<strt;
    cout<<city;
}

int main()
{
    person::address adr;
    adr.hno=17;

    person p1;
    p1.getdata();
    p1.Show();
}
