//Assignment : 12
//PART: B (File Handling)
//1. WOP for storing char / int / double data in file and print after reading from file.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 14/04/21
*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream O;
O.open("e:/data/Abc.txt");
if (O.fail())
cout<<"unable to open the file";
else
{
int x;
cout<<"Reading from keyboard:";
cin>>x;
O<<x;
O.close();
}
ifstream In;
In.open("e:/data/Abc.txt");
if (In.fail())
cout<<"unable to open the file";
else
{
int y;
cout<<"Reading from File:";
In>>y;
cout<<endl<<"Writing on Screen"<<y;
In.close();
}
return 0;
}