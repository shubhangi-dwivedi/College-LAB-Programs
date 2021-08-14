//2.WOOP in C++ with class ITEM to read and show records of 5 Items.

#include<iostream>

using namespace std;

class item
{
    private:
        int order_no;
        char p_name[50],date_of_purchase[10],buyer[50];
        float price;
    public:
        void read();
        void display();
};

void item::read()
{
        cout<<"Enter order no. : ";
        cin>>order_no;
            
        cout<<"Enter buyer's name : ";
        fflush(stdin);
        gets(buyer);

        cout<<"Enter product name : ";
        fflush(stdin);
        gets(p_name);

        cout<<"Enter price of the product : ";
        cin>>price;

        cout<<"Enter date of purchase : ";
        fflush(stdin);
        gets(date_of_purchase);
}

void item::display()
{
    cout<<"\nOrder no. : "<<order_no;
    cout<<"\nBuyer's name : "<<buyer;
    cout<<"\nProduct name : "<<p_name;
    cout<<"\nPrice : "<<price;
    cout<<"\nDate of purchase : "<<date_of_purchase;
}

int main()
{
    item it[5];
    
    for(int i=0;i<5;i++)
    {
        it[i].read();
        cout<<"\n";
    }

    for(int i=0;i<5;i++)
    {
        cout<<"\n";
        it[i].display();
        cout<<"\n";
    }

    return 0;
}