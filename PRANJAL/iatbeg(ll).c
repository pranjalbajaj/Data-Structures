#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*start,*save;
int main()
{
    int x,k=1;
    start=NULL;
    while(k==1)
    {p=(node *)malloc(sizeof(node));
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
      /*  save=start;
        start=p;
        p->next=save;*/
        p->next=start;
        start=p;
    }
    printf("enter 1 to enter more");
    scanf("%i",&k);
    }
    while(start!=NULL)
    {
        printf("%i->",start->info);
        start=start->next;
    }
    printf("NULL");
}
