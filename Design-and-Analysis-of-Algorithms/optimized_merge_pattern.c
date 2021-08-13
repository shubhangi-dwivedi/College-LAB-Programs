#include<stdio.h>
#include<stdlib.h>

struct treenode *list(struct treenode *head,int n);
struct treenode *least(struct treenode **head);
struct treenode *optimal(struct treenode **head,int n);
void insert(struct treenode **head,struct treenode *pt);

struct treenode
{
	struct treenode *lchild;
	struct treenode *rchild;
	struct treenode *next;
	int weight;
};

struct treenode *optimal(struct treenode **head,int n)
{
	int i,moves=0;
	struct treenode *pt,*nn;
	
	for(i=1;i<=n-1;i++)
	{
	   	pt=(struct treenode*)malloc(sizeof(struct treenode));
		(pt->lchild)=least(head);
		(pt->rchild)=least(head);
		pt->weight=((pt->lchild)->weight)+((pt->rchild)->weight);
	    
		moves=moves+pt->weight;
		insert(head,pt);
	}
	printf("\nTotal number of moves=%d\n",moves);
	return least(head);
}

struct treenode *least(struct treenode **head)
{
	int flag=0;
	struct treenode *traverse,*prev,*min;
	struct treenode *temp;
	
	traverse=*head;
	min=traverse;
	
	while(traverse->next!=NULL)
	{
		if((traverse->next->weight)<min->weight)
		{
			flag=1;
			min=traverse->next;
			prev=traverse;
		}
		traverse=traverse->next;
    }

	if(flag==1)
	{
	     temp=prev->next;
	     prev->next = temp->next;
	     free(temp);
	}
    else
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
    return min;
}

void insert(struct treenode **head,struct treenode *pt)
{
	struct treenode *newNode,*temp;
	newNode=(struct treenode*)malloc(sizeof(struct treenode));
	newNode=pt;
	newNode->lchild=pt->lchild;
	newNode->rchild=pt->rchild;
	newNode->next = NULL;
	temp =*head;
	printf("files with record :%d and %d are merged to a single file with records: %d\n",newNode->lchild->weight,newNode->rchild->weight,newNode->weight);
	if(temp==NULL)
	{
			newNode->next=*head;
			*head=newNode;
	}
	else
	{
		while(temp->next != NULL)
		{
		  temp = temp->next;
	    }
	    temp->next = newNode;
	}
}

struct treenode *list(struct treenode *head,int n)
{
	int i;
	struct treenode *nn;
	struct treenode *traverse;
	
	printf("enter the weights of the nodes respectively\n");
	for(i=1;i<=n;i++)
	{
		nn=(struct treenode*)malloc(sizeof(struct treenode));
		scanf("%d",&nn->weight);
		nn->lchild=NULL;
	    nn->rchild=NULL;
		nn->next=NULL;
		if(head==NULL)
		{
			head=nn;
			traverse=head;
		}
		else
		{
			nn->next=NULL;
			traverse->next=nn;
			traverse=nn;
		}
    }
	return head;
}
int main()
{
	int n;
	struct treenode *head=NULL,*rec;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	head=list(head,n);
	rec=optimal(&head,n);
	printf("total number of records after merging=%d\n",rec->weight);
	
}

/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 
struct treenode
{
    int weight;
    struct treenode *lchild;
    struct treenode *rchild;
};      

struct node *list_insert(struct node *head,int i)
{
    struct node *temp;

        struct node *nn=malloc(sizeof(struct node));
        printf("Size of file %d : ",i);
	    scanf("%d",&(nn->data));
	    nn->next=NULL;
	    if(head==NULL)
	    {
		    head=nn;
		    temp=head;
	    }
	    else
	    {
		    temp->next=nn;
		    temp=nn;
	    }
	    return head;
    
}

struct node* least(struct node *head)
{
    struct node *min;
    struct node *ptr=head;

    if(head==NULL)
    {
        printf("\nList is empty\n");
    }
    else if(head->next=NULL)
    {
        head=NULL;
    }
    
    while(ptr)
    {
        if(ptr->data < min->data)
        {
            min=ptr;
        }
        ptr=ptr->next;
    }
    
    if(min==head)
    {
        head=head->next;
    }

    else
    {
        ptr=head;

        while(ptr->next!=min)
        {
            ptr=ptr->next;
        }
        ptr->next=min->next;
    }

    return min;
}

void insert(struct node *head, struct treenode *ptr)
{
    struct node *temp, *nn;

    temp=head;

    while(temp)
    {
        temp=temp->next;
    }
    nn=(struct node*)malloc(sizeof(struct node));
    nn->data=ptr->weight;
    nn->next=NULL;
}

struct treenode* merge_tree(struct node *head, struct treenode** pt ,int n, int *total)
{
    int i;
    struct node* pt2;
    for(i=1; i<n-1; i++)
    {
        pt=(struct treenode*)malloc(sizeof(struct treenode));
        pt->lchild = least(head);
        pt->rchild = least(head);
        pt->data = ((pt->lchild)->data + (pt->rchild)->data);
        printf("\nRecords: %d\n",pt->weight);
        *total=*total+pt->weight;
        pt2=(struct node*)malloc(sizeof(struct node));
        pt2->data=pt->weight;
        pt2->next=NULL;

        insert(head,pt);
    }
    return least(head);
}

void list_display(struct node *head)
{
    int i=1;
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d record in list :%d\n",i,ptr->data);
		ptr=ptr->next;
        i++;
	}
}

int main()
{
    int n,i,size, total=0;
    struct node* min;
    struct node* nn=NULL;
    struct node *head=NULL;
    struct treenode* t;
    struct treenode* pt=NULL;

    printf("Enter no. of records : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        head=list_insert(head,i);
    }
    printf("\n");
    list_display(head);
    
    t=merge_tree(head,pt,n,total);

    printf("\nOptimal merge patter\n");
    printf("\nTotal is : %d\n",total);

    return 0;
}
*/