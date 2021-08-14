//Assignment : 7
//4. WOOP over String class for writing all possible Constructors and Destructor for String Class.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 25/02/21
*/

#include<iostream>
#include<cstring>

using namespace std;

class String
{
	private:	
		char *ptr;
		int len;

	public:
		String()	//default Cons. (inline constructor)
		{
			cout<<endl<<"Calling Default Cons.";
			len=0;
			ptr=new char[len+1];
			strcpy(ptr,"\0");
		}	

		String(char const *z)	//Parametrized Cons. (Dynamic Cons.)
		{
			cout<<"\n\nCalling Parametrized Construstor";
			len=strlen(z);
			ptr=new char[len+1];
			strcpy(ptr,z);
		}

		String(String &Z)
		{
			cout<<"\n\nCalling Copy Constructor";
			len=Z.len;
			ptr=new char[len+1];
			strcpy(ptr,Z.ptr);
		}

		~String()
		{
			//cout<<endl<<"-------------"<<endl<<ptr<<"\n";
			cout<<"\n\nCalling Destructor";
			delete[] ptr;
		}
		
		void Show()
		{
			cout<<"\nString :"<<ptr<<endl<<"length of string : "<<len;
		}		
};


int main()
{
    char s[50];

	String s1;
	s1.Show();
	{
        cout<<"\n\nInput string : ";
        gets(s);
        String s2(s);
        s2.Show();

        cout<<"\n\nInput string : ";
        gets(s);
        s1=String(s);   //explicit calling
        s1.Show();	
        {
            String s3(s2);
            s3.Show();
        }
	}	
}
