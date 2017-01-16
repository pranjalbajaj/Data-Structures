#include<stdio.h>
struct term
{
    int coef;
    int exp;
}typedef term;;
struct node
{
    term t[10];
    struct node *next;
}typedef node;
node *p,*start,*q,*rear;
int i=0,k=1;
int main()
{
    start=NULL;
    while(k==1)
    {p=(node *)malloc(sizeof(node));
    printf("enter coef");
    scanf("%i",&(p->t[i].coef));
    printf("enter exp");
    scanf("%i",&(p->t[i].exp));
    //i++;
    insert(p);
    printf("want more(1)");
    scanf("%i",&k);
    }
    display(start);
}
void insert(node *p)
{
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
}
void display(node *start)
{
    int i=0;
    printf("-----coef----------exp---");
    while(start!=NULL)
    {
        printf("\n%5d\t\t%5d",start->t[i].coef,start->t[i].exp);
        start=start->next;
        //i++;
    }

}
