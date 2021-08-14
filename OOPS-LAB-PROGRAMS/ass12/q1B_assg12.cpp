/*Part- B
File Handling
*/

//1.WOP for storing char / int / double data in file and print after reading from file.

/*
Name: SHUBHANGI DWIVEDI
roll no. : 1913122
Date: 15/04/2021
*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream out;
	out.open("sample.txt");
	
	char ch;
	cout<<endl<<"Read char: ";
	cin>>ch;
	out<<ch<<"\n";

	out.close();
	
	ifstream in;
	in.open("sample.txt");
	
	if(in.fail())
	{
	   cout<<endl<<"Unable to open";
	}
	
	else
	{
	 	char d;
	 	in>>d;
	 	cout<<"\nChar is: "<<d;
		in.close();
	}
	
	return 0;
}
