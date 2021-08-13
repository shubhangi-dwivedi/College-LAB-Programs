#include<stdio.h>

struct obj
{
    int id,x;
    float prof,wt;
};
void bknap(int k,float cp,float cw,float cap,int n,struct obj o[],int y[],float *fp,float *fw);
//void sort(int n, struct obj o[]);/
float bound(int k,float cp,float cw,float cap,int n, struct obj o[]);

int main()
{
    int n,i,y[100];
    float cap,prof=0.0,fp=0.0,fw=0.0;
    struct obj o[100];
    
    printf("Enter number of objects:\n");
    scanf("%d",&n);
    
    printf("Knapsack capacity: ");
    scanf("%f",&cap);
    
    for(i=1;i<=n;i++)
    {
        printf("Enter profit and weight of the object %d:\n",i);
        scanf("%f%f",&o[i].prof,&o[i].wt);
        
        o[i].id=i;
        y[i]=0;
    }
    
    /*printf("DATA ENTERED:\n");
    for(i=1;i<=n;i++)
    {
        printf("Object id:%d\tprofit:%f\tweight:%f\n",o[i].id,o[i].prof,o[i].wt);
	}
	printf("\n");*/		
    
    bknap(1,0.0,0.0,cap,n,o,y,&fp,&fw);
    
    printf("SOLUTION VECTOR:\n");
    for(i=1;i<=n;i++)
        printf("Object id:%d Fraction: %d\n",o[i].id,o[i].x);		
	
    printf("Total profit: %f",fp);
    
    return 0;
}

void bknap(int k,float cp,float cw,float cap, int n, struct obj o[],int y[],float *fp,float *fw)
{
    int j;
    //for left child
    
    if(cw+o[k].wt<=cap)
    {
        y[k]=1;
        
        if(k<n)
            bknap(k+1,cp+o[k].prof,cw+o[k].wt,cap,n,o,y,fp,fw);
        if((cp+o[k].prof>*fp)&&(k==n))
        {
            *fp=cp+o[k].prof;
            *fw=cw+o[k].wt;
            
            for(j=1;j<=k;j++)
                o[j].x=y[j];
        }
    }
    
    //right child
    
    if(bound(k,cp,cw,cap,n,o)>=*fp)
    {
        y[k]=0;
        if(k<n)
            bknap(k+1,cp,cw,cap,n,o,y,fp,fw);
    
        if((cp>*fp)&&(k==n))
        {
            *fp=cp;
            *fw=cw;
            
            for(j=1;j<=k;j++)
                o[j].x=y[j];
        }
    }
}

float bound(int k,float cp,float cw,float cap,int n, struct obj o[])
{
    int i;
    float np,nw;
    np=cp;
    nw=cw;
    
    for(i=k+1;i<=n;i++)
    {
        nw=nw+ o[i].wt;
        if(nw<cap)
            np=np+ o[i].prof;
        else
            return np+(1-(nw-cap)/o[i].wt)*o[i].prof;
    }
    return np;
}

/*#include<stdio.h>

void b_knap(int w[], int p[], int m, int cw, int cp, int k, int n)
{
    int fw, fp,y[100],x[100],j;
    //generate lchild
    if(cw+ vw[k]<=m)
    {
        y[k]=1;
        if(k<n)
            b_knap(w,p,m,cw+w[k],cp+p[k],k+1,n);

        if((cp+p[k] >fp) && (k==n))
        {
            fp=cp+p[k];
            fw=cw+w[k];

            for(j=1;j<=k;j++)
                x[j]=y[j];
        }
    }

    //generate rchild
    if(bound(w,cp,cw,m,p,k,n)>=fp)
    {
        y[k]=0;

        if(k<n)
            b_knap(w ,p, m, cw,  cp, k+1,n);
        
        if((cp>fp) && (k==n))
        {
            fp=cp;
            fw=cw;
            
            for(j=1;j<=k;j++)
                x[j]=y[j];
        }
    }
}

int bound(int w[], int cp,int cw, int m,int p[], int k,int n)
{
    int i,np,nw;
    np=cp;
    nw=cw;

    for(i=k+1;i<=n;i++)
    {
        nw+=w[i];

        if(nw<m)
            np+=p[i];
        else
            return np + (1-(nw-m)/w[i])*p[i];
    }

    return np;
}

int main()
{
    int m,p[100],w[100],n,i;

    printf("Enter the size of knapsack : ");
    scanf("%d",&m);

    printf("Enter the no. of weights & profits : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter weight %d : ",i);
        scanf("%d",&w[i]);

        printf("Enter profit %d : ",i);
        scanf("%d",&p[i]);
    }

    b_knap(w ,p, m, 0, 0, 1,n);
}*/