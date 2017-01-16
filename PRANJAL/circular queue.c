#include<stdio.h>
int f,r;
f=-1;
r=-1;
int insert(int a[],int size)
{
    int e;
    if((r==size-1 && f==0) || (r==f-1))
    {
        return -1;
    }
    printf("\nenter the element to insert");
    scanf("%i",&e);
    if(r==-1)
    {
        f++;
        r++;
        a[r]=e;
    }
    else if(r!=size-1)
    {
        r++;
        a[r]=e;
    }
    else
    {
        r=0;
        a[r]=e;
    }
    printf("f=%i",f);
    printf("r=%i",r);
}
int delete(int a[],int size)
{
    if(f==-1)
    {
        return -1;
    }
    else
    {
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else if(f==size-1)
        {
            f=0;
        }
        else
        {
            f++;
        }
    }
}
void display(int a[],int size)
{
    int i;
    if(r>=f)
    {
        for(i=f;i<=r;i++)
        {
            printf("%i\t",a[i]);
        }
    }
    else
    {
        for(i=f;i<size;i++)
        {
            printf("%i\t",a[i]);
        }
        for(i=0;i<=r;i++)
        {
            printf("%i\t",a[i]);
        }
    }
}
int main()
{
    int a[20],size,c,m,e;
    printf("enter the size of queue");
    scanf("%i",&size);
    int p=1;
    while(p==1)
    {   int t,m;
        t=1;
        m=1;
        printf("main menu\n");
        printf("1.insert\n2.delete\n3.display");
        printf("\nenter the choice");
        scanf("%i",&c);
    switch(c)
    {
        case 1: while(t==1)
                {
                    int d=insert(a,size);
                    if(d==-1)
                    {
                        printf("overflow\n");
                        t=3;
                    }
                    else
                    {
                        printf("press 1 to enter more");
                        scanf("%i",&t);
                    }
                }
                display(a,size);
                printf("\na[0]=%i",a[0]);
                printf("f=%i",f);
                printf("r=%i",r);
                break;
        case 2: while(m==1)
                {
                   int k=delete(a,size);
                   if(k==-1)
                   {
                       printf("\nunderflow");
                       m=5;
                   }
                   else
                    {   printf("press 1 to delete more");
                        scanf("%i",&m);
                    }
                }
                if(f!=-1)
                    {
                        display(a,size);
                    }
                printf("f=%i",f);
                printf("r=%i",r);
                break;

        case 3: printf("\n");
                display(a,size);
    }
    printf("press 1 to go to main menu");
    scanf("%i",&p);
    }
}
