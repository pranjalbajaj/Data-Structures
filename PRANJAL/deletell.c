#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*start,*save,*rear,*t,*r;
int main()
{
    start=rear=NULL;
    int k=1,e;
    while(k==1)
    {p=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(p->info));
    if(start==NULL)
    {
        start=rear=t=r=p;
        p->next=NULL;
    }
    else
    {
        rear->next=p;
        p->next=NULL;
        rear=p;
    }
    printf("choice");
    scanf("%i",&k);
    }
    while(start!=NULL)
    {
        printf("%i->",start->info);
        start=start->next;
    }
    printf("NULL");
    printf("\n enter the element to delete");
    scanf("%i",&e);
    while(t->info!=e)
    {
        save=t;
        t=t->next;
    }
    save->next=t->next;
    t->next=NULL;
    while(r!=NULL)
    {
        printf("%i->",r->info);
        r=r->next;
    }
    printf("NULL");

}
