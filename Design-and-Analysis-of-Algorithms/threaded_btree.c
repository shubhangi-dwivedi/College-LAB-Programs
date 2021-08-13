#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0
#define null 0

struct node
{
	int data;
	
	struct node *lchild;
	struct node *rchild;
	
	int lthread;
	int rthread;
};

struct node *insuccessor(struct node *p)
{
	struct node *t;

	t=p->rchild;
	//if(p->rthread==1)
		t=p->rchild;
		
	if(!(p->rthread))
		while(!(t->lthread))
			t=t->lchild;
			
	return t;
}

void inorder(struct node *tree)
{
	struct node *p=tree;
	
	for(;;)
	{
		p=insuccessor(p);
		if(p==tree)
			break;
		printf("%d ",p->data);
	}
}   

struct node *search(struct node *tree)
{
	struct node *p=tree;
	struct node *q;
	for(;;)
	{
		q=p;
		p=insuccessor(p);
		
		if(p==tree)
			break;
	}
	return q;
}

void insertright(struct node *s,struct node *r)
{
	struct node *t;
	
	r->rchild=s->rchild;
	r->rthread=s->rthread;
	
	r->lchild=s;
	r->lthread=true;
	
	s->rchild=r;
	s->rthread=false;
	
	if(!(r->rthread))
	{
		t=insuccessor(r);
		t->lchild=r;
	}
}

struct node insert(struct node root,int val)
{
	struct node ptr=root;
}

int main()
{
	int ch,key;
	struct node *nn,*tree,*s;
	
	tree=(struct node *)malloc(sizeof(struct node));//head node
	tree->data=0;
	tree->lchild=tree;
	tree->lthread=true;
	tree->rchild=tree;
	tree->rthread=false;
	
	printf("\nDo you want to insert more nodes(1: yes/0 : no) : ");
	scanf("%d",&ch);
	while(ch)
	{
		nn=(struct node *)malloc(sizeof(struct node));

		printf("\nenter Key value to be inserted :");
		scanf("%d",&key);
		nn->data=key;	
		
		if(tree->lthread==true)
		{
			tree->lchild=nn;
			tree->lthread=false;
			
			nn->lchild=tree;
			nn->lthread=true;
			nn->rchild=tree;
			nn->rthread=true;
		}

		else
		{	
			nn->lchild=null;
			nn->lthread=true;
			nn->rchild=null;
			nn->rthread=true;
			
			s=search(tree);
			insertright(s,nn);
		}

		ch=0;
		printf("\nDo you want to insert more nodes(1: yes/0 : no) : ");
		scanf("%d",&ch);
	}
		
	inorder(tree);
	
	return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;

    struct node* leftChild;
    struct node* rightChild;

    int leftThread;
    int rightThread;
}

struct node* insuccessor(struct node *p)
{
    struct node *t;

    t=p->rightChild;

    if(!p->rightThread)
        while(!t->leftThread)
            t=t->leftChild;

    return t;
}

void inorder(struct node* tree)
{
    struct node* p=tree;

    for(;;)
    {
        p=insuccessor(p);
        if(p==tree)
            break;

        printf(" %c ",p->data);
    }
}

int main()
{

}
*/