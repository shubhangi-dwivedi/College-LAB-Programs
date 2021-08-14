//Assignment-5 (Implementing Data Structures using C++ OOP)
//2. WOOP to Implement Linear Queue with its basic operations

/*NAME : SHUBHANGI DWIVEDI
ROLL NO. 1913122 
DATE : 03/02/21
*/

#include<iostream>

using namespace std;

const int MAX=10;

class Queue
{
    private :
        int a[MAX];
        int front, rear;

    public :
        void init()
        {
            front=rear=-1;
        }
        void enqueue(int x);
        int dequeue();
        int isempty();
        int isfull();
        void display();
        int Size();
}; 

int Queue :: isempty()
{
    if(front==-1&&rear==-1)
        return -1;
    
    return 0;
}

int Queue :: isfull()
{
    if(front==0 && rear==MAX-1)
        return -1;
    
    return 0;
}

void Queue :: enqueue(int x)
{
    if(isempty()==1)
    {
        front=0;
        a[++rear]=x;
    }
    else if(isfull()==1)
        cout<<"Queue is full.....element can't be inserted\n";
    else
        a[++rear]=x;
    
}

int Queue :: dequeue()
{
    if(isempty()==1)
    {
        cout<<"Queue is empty....element can't be deleted\n";
        return -1;
    }
    else if(front==rear)
    {
        front=rear=-1;
        return a[front++];
    }
    else
        return a[front++];
}

void Queue :: display()
{
    if (front==-1 && rear==-1)
        cout<<"*****Queue is empty*****\n";
    
    else
    {
        cout<<"Elements in queue are : ";
        for(int i = 0;i<=rear;i++)
            cout<<a[i]<<" ";
    }
    cout<<endl;
}

int Queue :: Size()
{
    return rear+1;
}

int main()
{
    Queue q;
    q.init();

    int ch,x;

    do
    {
        cout<<"Enter your choice :\n1.Enqueue\n2.Dequeue\n3.Display\n4.Size of queue\n5.EXIT\n-> ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter value to be inserted in the queue : ";
                cin>>x;
                q.enqueue(x);
                cout<<endl;
                break;

                case 2:
                    cout<<"Deleted element from the queue is : "<<q.dequeue()<<endl;
                    break;

            case 3: 
                q.display();
                break;

            case 4:
                cout<<"Size of the queue is : "<<q.Size()<<endl;
                break;

            case 5: 
                cout<<"*****EXIT*****";
                break;

            default:
                cout<<"Wrong choice.....Enter correct choice\n";
                break;
        }

    } while (ch!=5);
    
    return 0;
}
