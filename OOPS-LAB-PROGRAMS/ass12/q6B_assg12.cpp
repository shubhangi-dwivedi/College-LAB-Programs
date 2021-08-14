/*Part- B
File Handling
*/

//6.Modify Program 3 to perform random updation in file. append, ate,read, write function,seekg, seekp, tellg, tellp.

/*
Name: SHUBHANGI DWIVEDI
roll no. : 1913122
Date: 15/04/2021
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void write()
{
	ofstream o;
	
	o.open("file3.txt"); 
	
	if(o.fail())
		cout<<"Unable to open file";	
		
	else
	{
		cout<<"\nWriting data in File : \n";
		int c;
		int x;
		while(1)
		{
			cout<<"\nPut pointer position= "<<o.tellp();
			cout<<"\nEnter data= ";
			cin>>x;
			o.put(x);
			
			cout<<"\nDo you want to add more data 1. Yes   2. No ";
			cin>>c;
			
			if(c!=1)
				break;
			
			
		}
		o.close();
	}
	
}


void read()
{
		
	ifstream in;
	
	in.open("file3.txt");
	
	if(in.fail())
		cout<<"\nUnable to open file";
	else
	{
		in.seekg(0);
		cout<<"\nReading data from file :\n";
		int ch;
		while(in.eof()!=1)
		{
			ch=in.get();
			cout<<ch<<"\n";
			
		}
	
		in.close();
		
	}
}

void append()
{
	ofstream o;
	
	o.open("file3.txt",ios::app); 
	
	if(o.fail())
		cout<<"\nUnable to open file";	
		
	else
	{
		int x;
		cout<<"\nEnter new data : \n";
		cin>>x;
		o.put(x);
		

		o.close();
		cout<<"\nNew data Appended";
	}
}

void update()
{
	int flag=0;
	fstream f;
	
	f.open("file3.txt",ios::in|ios::out|ios::ate);
	
	f.seekg(0);
	
	if(f.fail())
		cout<<"\nUnable to open";
		
	else
	{
		int data,ch;
		cout<<"\nEnter data to update= ";
		cin>>data;
		
		while(!f.eof())
		{
			ch=f.get();
			if(data==ch)
			{
				flag=1;
				int x;
				cout<<"Enter new data to be updated= ";
				cin>>x;
				int add=f.tellg();
				f.seekp(add-sizeof(ch));
				
				f.put(x);
				break;				
			}
		}
		
		if(flag==0)
			cout<<"\nNo matching data found";
			
		f.close();
	}
}

int main()
{
	int c;
	
	do
	{
		cout<<"\n1. Read  2. Write  3. Append  4. Update  5. Exit";
		cout<<"\nEnter choice= ";
		cin>>c;
		
		switch(c)
		{
			case 1: read();
					break;
			
			case 2: write();
					break;
			
			case 3: append();
					break;
				
			case 4: update();
					break;
				
			case 5: exit(0);
		}
		
	}while(1);
	
	return 0;
}
