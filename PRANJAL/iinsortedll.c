#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*save,*start,*rear,*t;
int main()
{
    int k=1;
    start=rear=NULL;
    while(k==1)
    {
        p=(node *)malloc(sizeof(node));
        printf("enter the info");
        scanf("%i",&(p->info));
        if(start==NULL)
        {
            start=rear=t=p;
            p->next=NULL;
        }
        else
        {
            rear->next=p;
            p->next=NULL;
            rear=p;

        }
        printf("want to enter more");
        scanf("%i",&k);
    }
        while(start!=NULL)
        {
            printf("%i->",start->info);
            start=start->next;
        }
        printf("NULL");
        p=(node *)malloc(sizeof(node));
        scanf("%i",&(p->info));
        rear=t;
        while((rear->info)<(p->info))
        {
            save=rear;
            rear=rear->next;
        }

        p->next=save->next;
        save->next=p;
        printf("\n");
        while(t!=NULL)
        {
            printf("%i->",t->info);
            t=t->next;
        }
        printf("NULL");
}
