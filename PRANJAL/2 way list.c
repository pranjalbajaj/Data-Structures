#include<stdio.h>
struct node
{
    int info;
    struct node *f,*b;
}typedef node;
node *p,*first,*last,*rear;
int main()
{
    int k=1;
    first=last=NULL;
    while(k==1)
    {
        p=(node *)malloc(sizeof(node));
        printf("enter info");
        scanf("%i",&(p->info));
        if(first==NULL && last==NULL)
        {
            first=rear=p;
            p->b=NULL;
            p->f=NULL;
        }
        else
        {   last=p;
            p->b=rear;
            rear->f=p;
            p->f=NULL;
            rear=rear->f;
        }
        printf("want to enter more(1)");
        scanf("%i",&k);
    }
    printf("froem l-r");
    while(first!=NULL)
    {
        printf("%i->",first->info);
        first=first->f;
    }
    printf("\n from r-l");
    while(last!=NULL)
    {
        printf("%i->",last->info);
        last=last->b;
    }
}
