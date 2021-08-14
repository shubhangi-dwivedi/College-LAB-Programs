//Assignment : 13
//6. WOOP over Array class for searching, sorting and storing Array of Generic D.T.

/*
NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 22/04/21
*/

#include<iostream>
using namespace std;

template<class t> //template <class t, int size>
class Array
{
    t A[10];     //t A[size]
    
    public:
        void Get(int n)   //void Get()
        {
            cout<<"\nEnter elements : ";
            for(int i=0;i<n;i++)    //for(int i=0;i<size;i++)
                cin>>A[i];
        }

        void Search(t key, int n) //linear search  //void Search(t key)
        {
            for(int i=0;i<n;i++)    //for(int i=0;i<size;i++) 
                if (key==A[i])
                {
                    cout<<"\nElement Found at position"<<i+1;
                    return ;
                }
                cout<<"\nElement Not Found";
        }

        void Sort(int n)   //bubble sort  //void Sort()
        {
            t temp;
            
            for(int i=0;i<n;i++)     //for(int i=0;i<size;i++) 
                for (int j=i+1;j<n;j++)  //for(int j=0;j<size;j++) 
                    if (A[i]>A[j])
                    {
                        temp=A[i];
                        A[i]=A[j];      
                        A[j]=temp;
                    }
        } 

        void Show(int n)  //void Show()
        {
            cout<<endl<<"Printing sorted Array : ";
            for(int i=0;i<n;i++)  //for(int i=0;i<size;i++) 
                cout<<"\t"<<A[i];
        }
};


int main()
{
    int n;

    Array <int> Z; //Array <int,10> Z;  (now there is no need to pass n)
    int key1;
    cout<<"\nEnter value of n : ";
    cin>>n;
    Z.Get(n);
    cout<<"\nEnter the element you want to search : ";
    cin>>key1;
    Z.Search(key1,n);
    Z.Sort(n);
    Z.Show(n);

    Array <double> Y;  //Array <double,5> Y;   (now there is no need to pass n)
    int key2;
    cout<<"\nEnter value of n : ";
    cin>>n;
    Y.Get(n);
    cout<<"\nEnter the element you want to search : ";
    cin>>key2;
    Y.Search(key2,n);
    Y.Sort(n);
    Y.Show(n);

    return 0;
}