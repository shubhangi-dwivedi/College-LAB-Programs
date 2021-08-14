//ASSIGNMENT: 12
/*Part- B
File Handling
*/
//WOP to copy all data of one file and paste it to another.

/*
Name: SHUBHANGI DWIVEDI
roll no. : 1913122
Date: 15/04/2021
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	
	ofstream o;
	
	o.open("file2.txt"); 
	
	if(o.fail())
		cout<<"Unable to open file";	
		
	else
	{
		cout<<"Writing data in File1\n";
		int c;
		char x;
		while(1)
		{
			cout<<"\nEnter data= ";
			cin>>x;
			o<<x<<"\n";
			
			cout<<"Do you want to add more data 1. Yes   2. No ";
			cin>>c;
			
			if(c!=1)
				break;
			
			
		}
		o.close();
	}
	
	ifstream in;
	ofstream out;
	
	in.open("file2.txt");
	out.open("file3.txt");
	
	if(in.fail() || o.fail())
		cout<<"Unable to open file";
	else
	{
		char ch;
		while(in.eof()!=1)
		{
			ch=in.get();
			out.put(ch);		
		}
		
		cout<<"\nData written from File 1 to File 2 ";
		in.close();
		out.close();	
	}
	
	in.open("file3.txt");
	
	if(in.fail())
		cout<<"Unable to open file";
	else
	{
		char ch;
		cout<<"\n\nData of File 2 :\n ";
		while(in.eof()!=1)
		{
			ch=in.get();
			cout<<ch;
		}
		in.close();
	}
	
	return 0;
}
