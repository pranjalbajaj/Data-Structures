#include<stdio.h>
int *f,*r,*p,*s;
int insert(int a[],int size)
{
    int e;
    if((r==&a[size-1] && f==&a[0]) || (r==f-1))
    {
        return -1;
    }
    printf("enter the element");
    scanf("%i",&e);
     if(r==NULL)
    {
        r=&a[0];
        f=&a[0];
        p=&a[0];
        s=&a[0];
        *r=e;
    }
    else if(r!=&a[size-1])
    {
        r++;
        *r=e;
    }
    else
    {
        r=&a[0];
        *r=e;
    }
}
int delete()
{
    if(f==NULL)
    {
        return -1;
    }
    else if(f==r)
    {
        f=NULL;
        r=NULL;
        p=f;
    }
    else
    {
        f++;
        p=f;
    }
    printf("f=%i",f);
}
void display(int a[],int size)
{   if(p!=NULL)
    {   while(p!=&a[size-1])
        {
            printf("%i\t",*p);
            p++;
        }
        printf("%i\t",*p);
    }
    p=f;
    if(r<f)
    {
        while(s!=r)
        {
            printf("%i\t",*s);
            s++;
        }
        printf("%i",*s);
    }
}
int main()
{

    f=NULL;
    r=NULL;
    p=NULL;
    s=NULL;
    int a[20],size,d,m,t=1,k;
    printf("enter the size of queue");
    scanf("%i",&size);
    while(t==1)
    {   int c=1;
        int n=1;
        printf("main menu");
        printf("\n1.insert\n2.delete");
        printf("enter the choice");
        scanf("%i",&m);
    switch(m)
    {
        case 1: while(c==1)
                {
                    d=insert(a,size);
                    if(d==-1)
                    {
                        printf("overflow\n");
                        c=7;
                    }
                    else
                    {
                        printf("press 1 to enter more");
                        scanf("%i",&c);
                    }
                }
                display(a,size);
                break;
        case 2: while(n==1)
                {
                  k=delete();
                  if(k==-1)
                  {
                      printf("underflow\n");
                      n=8;
                  }
                  else
                  {
                      printf("press 1 to delete more");
                      scanf("%i",&n);
                  }
                }
                 display(a,size);
    }
    printf("press 1 for main menu");
    scanf("%i",&t);
    }
}
