//Assignment 6 : (Friend Functions and Member Function)
/*
5. WOOP over String class with following functions;
(i) Storing empty string and string., (ii) Show string
(iii)Compare two strings , (iv) Add two strings (concatenation)
*/

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 17/02/21
*/

#include<iostream>
#include<cstring>

using namespace std;

class STRING
{
		char *p;
		int l;
	public:
		void get()
		{
			//create an empty string
			l=0;
			p=new char[l+1];
			strcpy(p,'\0');
			
		}
		void show()
		{
			cout<<endl<<"the  string is "<<p<<" and length is "<<l;
		}
		void get(char const *z)
		{
			l=strlen(z);
			p=new char[l+1];
			strcpy(p,z);
		}
		int compare(STRING w)
		{
			if(strcmp(p,w.p)==0)
				return 1;
			else
				return 0;
		}
		STRING add(STRING s)
		{
			STRING temp;
			
			temp.l=l+s.l;//length of string 
			temp.p=new char[temp.l+1];
			
			strcpy(temp.p,p);
			strcat(temp.p,s.p);
			
			return temp;
			
		}
		void add(STRING s1, STRING s2)
		{	
			l=s1.l+s2.l;
			p=new char[l+1];
			
			strcpy(p,s1.p);
			strcat(p,s2.p);
		
		}
	
};
int main()
{
	STRING s1,s2,s3,s4;
	s1.get("xyz");
	s1.show();
	
	s2.get("abcde");
	s2.show();
	
	cout<<"\n\ncomparing two string \n";
	int k;
	k=s1.compare(s2);
	if(k)
		cout<<"string is same \n";
	else
		cout<<"string isn't' same \n";
	
	cout<<"\n\nadding two string( way 1): \n";
	s3=s1.add(s2);
	s3.show();
	
	cout<<"\n\nadding two string( way 2): \n";
	s4.add(s2,s1);
	s4.show();
	
	return 0;
}