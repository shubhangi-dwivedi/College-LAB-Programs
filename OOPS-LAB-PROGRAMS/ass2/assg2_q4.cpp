//Read 10 identical / different  values (if user try to enter same value again prompt him / her to enter again)  in  array and print it.

/* NAME: SHUBHANGI DWIVEDI
ROLL NO. :1913122
DATE OF CREATION : 07/01/21 */

#include<iostream>

void checksame(int a[10],int s)
{
    int flag=0;
    do
    {
        cout <<"enter same element :";
        cin>>a[s];
        if(a[s]==a[1])
        {
            flag=1;
        }

    }while(flag==0);

}

void checkdiff(int a[10],int s)
{
    int flag=0;
    do
    {
        cout <<"enter different element :";
        cin>>a[s];
        for(int i=0;i<s;i++)
        {
            if(a[s]==a[i])
            {
                flag=1;
                break;
            }
        }
    }while(flag==0);
 }

int main()
{
    int a[10],ele;
    cout <<"enter elements in array";
    cin>>a[0];
    cin>>a[1];
    for(int i=2;i<10;i++)
    {
        if(a[0]==a[1])
            checksame(a,i);
        else
            checkdiff(a,i);
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i] <<"  ";
    }
    return 0;
}
