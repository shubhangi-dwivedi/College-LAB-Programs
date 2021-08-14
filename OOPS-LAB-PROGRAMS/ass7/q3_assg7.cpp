//Assignment : 7
//3. WOOP with Time class for implementing Default Cons. and Parameterized Cons for storing and printing Time.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>

using namespace std;

class Time
{
    private:
	    int hr,min,sec;

	public:
		Time()  //default cons.
		{ 
		    hr=min=sec=0;
		}

		Time(int x, int y,int z)  //parameterized cons.
		{
		  hr=x;
		  min=y;
		  sec=z;
		}

		void display()
		{
			cout<<"Time in 24hrs. format (hr:min:sec) = "<<hr<<" : "<<min<<" : "<<sec<<"\n";
		}
};

int main()
{
	Time t1;
	t1.display();
	
    int a,b,c;
    cout<<"Enter hr. , min , sec (resp.) : ";
    cin>>a>>b>>c;
    Time t2(a,b,c);
	t2.display();

    return 0;
}
