#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*start,*save,*rear;
int main()
{
    start=rear=NULL;
    int k=1;
    while(k==1)
    {p=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(p->info));
    if(start==NULL)
    {
        start=rear=p;
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
}
