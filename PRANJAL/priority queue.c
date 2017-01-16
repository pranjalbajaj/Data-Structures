#include<stdio.h>
struct node
{
    int info;
    int pri;
    struct node *next;
}typedef node;
node *start,*f,*r,*p,*n,*t;
int insert()
{
    p=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(p->info));
    printf("enter the pri");
    scanf("%i",&(p->pri));
    if(start==NULL)
    {
        start=p;
        f=p;
        r=p;
        n=p;
        p->next=NULL;
    }
    if((p->pri)>=(r->pri))
    {
        r->next=p;
        p->next=NULL;
        r=p;
    }
    else if((start->pri)>(p->pri))
        {
            p->next=start;
            start=p;
            f=p;
            n=p;
        }
        else
        {
            while((n->pri)<=(p->pri))
            {
                t=n;
                n=n->next;
            }
            p->next=t->next;
            t->next=p;
            n=start;
        }
}
void display()
{
    while(start!=NULL)
    {
        printf("%i\t",start->info);
        start=start->next;
    }
    printf("\n%i",f->info);
     printf("\n%i",r->info);
}
int main()
{
    start=NULL;
    f=NULL;
    r=NULL;
    p=NULL;
    n=NULL;
    int g=1;
    while(g==1)
    {
        insert();
        printf("press 1 to enter more");
        scanf("%i",&g);
    }
    display();
}
