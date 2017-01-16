#include<stdio.h>
int *f,*r,*p;
int insert(int a[],int size)
{
    int e;
    if(r==&a[size-1])
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
        *r=e;
        printf("\nr=%i",r);
    }
    else
    {
        r++;
        *r=e;
        printf("\nr=%i",r);
    }
}
int delete()
{
    if(f==NULL)
    {
        return -1;
    }
    else
    {
        f++;
        p=f;
    }
}
void display()
{
    while(p!=r)
    {
        printf("%i\t",*p);
        p++;
    }
    printf("%i",*p);
}
int main()
{

    f=NULL;
    r=NULL;
    p=NULL;
    int a[20],size,d,c=1,m,n=1,t=1,k;
    printf("enter the size of queue");
    scanf("%i",&size);
    while(t==1)
    {
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
                display();
                break;
        case 2: while(n==1)
                {
                  k=delete();
                  if(k==-1)
                  printf("underflow");
                  else
                  {
                      printf("press 1 to delete more");
                      scanf("%i",&n);
                  }
                }
                 display();
    }
    printf("press 1 for main menu");
    scanf("%i",&t);
    }
}
