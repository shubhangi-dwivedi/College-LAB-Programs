//Assignment : 13
//4. WOOP for implementing Vector Class for different Data Types.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>

using namespace std;

template<class t> 
class Vector
{
    t* v;
    int size;

    public:
        Vector(int m)
        {
            v=new t[m];
            for (int i = 0; i < m; i++)
                v[i]=0;
        }

        Vector(int n, t* a) //conversion from basic type to class type
        {
            v=new t[n];
            for (int i = 0; i < n; i++)
                v[i]=a[i];
        }

        void print(int n)
		{
			cout<<"( "<<v[0];
			for(int i=1;i<n;i++)
				cout<<" , "<<v[i];
			cout<<" )";
		}

        t operator*(Vector &y)
        {
            t sum=0;
            for (int i = 0; i < size; i++)
                sum += this->v[i]*y.v[i];

            return sum;
        }
};

int x[3]={3,4,5};

int main()
{
    int n;
	cout<<"\nEnter length of vector : ";  
	cin>>n; //input n=3
	Vector <int>v1(n,x);
	v1.print(n);
	
	cout<<"\n\nEnter length of vector : ";
	cin>>n;
	double a[20];
	cout<<"\nEnter elements of vector : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	Vector <double>v2(n,a);
	v2.print(n);
	
	cout<<"\n\nPrinting empty vector is : "; //checking whether constructor is working properly or not
	Vector <int>v3(3);
	v3.print(3);

    return 0;
}