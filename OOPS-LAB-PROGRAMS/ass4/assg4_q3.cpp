//3. WAP C++ using string (char array) read char by char search occurrence of particular char (or all char) 

/*
Name: SHUBHANGI DWIVEDI
Roll no. :1913122
Date : 27/01/21
*/

#include<iostream>
#include<stdio.h>

using namespace std;

class ch_string
{
    private :
        char s[50],ch,ch_search;
        int n,i,count=0;

    public:
        void read();
        
        void display();

        void particular_char();
        void all_chars();

};

void ch_string::read()
{
    cout<<"Enter the size of the character string : "; 
    cin>>n; // 1 byte reserved for '\0' therefore we can enter only (n-1) characters

     cout<<"Enter the characters of the string : ";
    for ( i = 0; i < n; i++)
    {
        ch=getchar(); //reading one character at a time(enter input continuously)

        if(ch==n)
            break;

        s[i]=ch;
    }
    s[i]='\0';
}

void ch_string::display()
{
    cout<<"The required string is : ";
    for( i=0;s[i]!='\0';i++)
    {
        cout<<s[i];
    }
    cout<<"\n";
}

void ch_string::particular_char()
{
    cout<<"\nEnter the character whose occurence you want to search : "; //occurrence of a particular character
    cin>>ch_search;
    for(i=0;s[i]!='\0';i++)
    {
        if(ch_search==s[i])
        {
            count++;
        }
    }
    cout<<"\nNo. of times letter "<<ch_search<<" occurred is : "<<count;
}

void ch_string::all_chars()
{
    cout<<"\n\n*****Occurrence of all characters*****";
    for(i=0;s[i]!='\0';i++)
    {
        count=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
        cout<<"\n";
        cout<<"No. of times character "<<s[i]<<" occurred is : "<<count;
    }
}

int main()
{
    ch_string s1;
    s1.read();
    s1.display();

    int ch;

    do
    {
       cout<<"\nEnter your choice :\n1.Display string\n2.Check occurrence of particular char\n3.Check occurrence of all characters in the string\n4.EXIT\n-> ";
       cin>>ch;

       switch (ch)
       {
       case 1:
           s1.display();
           break;

        case 2:
            s1.particular_char();
            break;

        case 3:
            s1.all_chars();
            break;

        case 4:
            cout<<"*****EXIT*****";
            exit(0);
       
       default:
            cout<<"\nWrong input.....enter correct choice\n";
           break;
       }
    } while (ch!=4);
    
    return 0;
}