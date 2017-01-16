#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *start,*f,*r,*p;
int insert()
{
    int e;
    p=(node *)malloc(sizeof(node));
    printf("enter the element");
    scanf("%i",&e);
    if(r==NULL)
    {
      p->info=e;
      p->next=NULL;
      start=p;
      f=p;
      r=p;
    }
    else
    {
        p->info=e;
        r->next=p;
        p->next=NULL;
        r=p;
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
        f=f->next;
        start->next=NULL;
        start=f;
    }
}
void display()
{
    while(start!=NULL)
    {
        printf("%i\t",(start->info));
        start=start->next;
    }
    start=f;
    printf("\n");
}
int main()
{
    int t,c;
    t=1;
    start=NULL;
    f=NULL;
    r=NULL;
    while(t==1)
   {
        printf("main menu");
        printf("\n1.insert\n2.delete\n");
        printf("enter the choice");
        scanf("%i",&c);
        int m,n;
        m=1;
        n=1;
        switch(c)
        {
            case 1: while(m==1)
                    {
                      insert();
                      printf("press 1 to enter more");
                      scanf("%i",&m);
                    }
                    display();
                    break;

            case 2: while(n==1)
                    {
                       int d=delete();
                       if(d==-1)
                       {
                           printf("underflow");
                           n=9;
                       }
                       else
                        {
                            printf("press 1 to delete more");
                            scanf("%i",&n);
                        }
                    }
                    display();
            printf("enter 1 to go to main menu");
            scanf("%i",&t);
        }
    }
}
