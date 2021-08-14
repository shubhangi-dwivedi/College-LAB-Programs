/*Part- B
File Handling
*/

//5. WOOP for storing n obects of STUDENT / ACCOUNT / BOOK /CUSTOMER class in file after retrival print it. (read, write function,seekg, seekp, tellg, tellp )

/*
Name: SHUBHANGI DWIVEDI
roll no. : 1913122
Date: 15/04/2021
*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;

class book
{
	private: 	int id,price,k;
				char name[20];
				
	public: 	void get()
				{
					cout<<"\nEnter ID of Book= ";
					cin>>id;
					cout<<"Enter NAME of Book= ";
					cin.ignore();
					cin.getline(name,20);
					cout<<"Enter PRICE of Book= ";
					cin>>price;
				}
				
				void display()
				{
					cout<<"\nID of Book= ";
					cout<<id;
					cout<<"\nNAME of Book= ";
					cout<<name;
					cout<<"\nPRICE of Book= ";
					cout<<price<<endl;
					
				}
				
				
};

void write(int n)
{
	int i;
	
	book a;
	
	ofstream f;
	f.open("book.txt");
	f.seekp(0);

	if (f.fail())
	{
		cout<<"Unable to open file";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			a.get();
			cout<<endl<<"Put pointer position= "<<f.tellp();
			printf("\n");
			f.write((char *) &a, sizeof(a));
			
		}
		f.close();
		
	}
	
}

void read(int n)
{
	int i;
	book a;
	ifstream g;
	g.open("book.txt");
	g.seekg(0);
	
	if(g.fail())
	{
		cout<<"Unable to open file";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cout<<endl<<"Get pointer position= "<<g.tellg();
			g.read((char *) &a, sizeof(a));
			a.display();
		}
		g.close();
		
	}
}

int main()
{
	int n;
	
	cout<<"Enter number of books= ";
	cin>>n;
	
	write(n);
	read(n);
	
	return 0;
	
}
