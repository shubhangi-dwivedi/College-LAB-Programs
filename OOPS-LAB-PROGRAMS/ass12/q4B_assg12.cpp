//ASSIGNMENT: 12
/*Part- B
File Handling
*/

//4. WOOP to test file state functions over any suitable file. (fail, good ,bad , eof)

/*
Name: SHUBHANGI DWIVEDI
roll no. : 1913122
Date: 15/04/2021
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream out;
	out.open("test.txt");
	
	if(out.fail())
		cout<<"\nUnable to open File";
		
	else
	{
		int x,c;
		do 
		{
			cout<<"\nEnter data= ";
			cin>>x;
			out.put(x);
			
			if (out.good())
			cout<<"\nData copied";
			
			cout<<"\n\nDo you want to add more data? 1.Yes  2.No  ";
			cin>>c;
			
			if(c!=1)
				break;
			
		}while(1);
		
		out.close();
	}
	
	
	ifstream in;
	in.open("test.txt");
	
	if (in.fail())
	{
		cout<<"Unable to open File"<<endl;
	}
	else
	{
		int a;
		cout<<"\nWritten Data on file :\n";
		
		while(in.eof()!=1)
		{
			a=in.get();
			cout<<a<<"\n";
			
		}
		in.close();
	}
	
	return 0;
}
