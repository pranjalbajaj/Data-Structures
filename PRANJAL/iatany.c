#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*start,*save,*q,*rear;
void dispaly(node *);
int main()
{
    int x,k=1,i=1,l;
    start=rear=NULL;
    while(k==1)
    {

    p=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(p->info));
    //p->info=x;
    if(start==NULL)
    {
        start=p;
        p->next=NULL;
    }
    else
    {
        save=start;
        start=p;
        p->next=save;
    }
    printf("enter 1 to enter more");
    scanf("%i",&k);
    }
    display(start);

    printf("\n enter the location after");
    scanf("%i",&x);
    rear=start;
    while(i!=x)
    {
        rear=start->next;
        i++;
    }

    q=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(q->info));
    save=rear->next;
    rear->next=q;
    q->next=save;
    display(start);
}
void display(node *start)
{
    while(start!=NULL)
    {
        printf("%i->",start->info);
        start=start->next;
    }
    printf("NULL");
}
