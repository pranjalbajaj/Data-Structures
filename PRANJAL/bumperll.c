#include<stdio.h>
struct node
{
    int info;
    struct node *next;
}typedef node;
node *p,*start,*t,*d,*rear,*n,*save,*q;
node *create_node(node *);
void insert_beg();
void insert_last();
void insert_atany();
void delete(int);
void display(node *);
int main()
{
    int c,k=1,l,e;
    start=NULL;
    printf("1.insert at beg\n2.insert at last\n3.insert at any\n4.delete");
    scanf("%i",&c);
    switch(c)
    {
        case 1: while(k==1)
                {
                    t=create_node(p);
                    insert_beg();
                    printf("want more nodes(1)");
                    scanf("%i",&k);
                }
                display(start);
                break;
        case 2: while(k==1)
                {
                    t=create_node(p);
                    insert_last();
                    printf("want more nodes(1)");
                    scanf("%i",&k);
                }
                display(start);

        case 3: while(k==1)
                {
                    t=create_node(p);
                    insert_last();
                    printf("want more nodes(1)");
                    scanf("%i",&k);
                }
                insert_atany(l);
                display(start);

        case 4: while(k==1)
                {
                    t=create_node(p);
                    insert_last();
                    printf("want more nodes(1)");
                    scanf("%i",&k);
                }
                display(start);
                delete(e);
                display(q);
    }
}
node *create_node(node *p)
{
    p=(node *)malloc(sizeof(node));
    printf("enter the info");
    scanf("%i",&(p->info));
    return p;
}
void insert_beg()
{
                    if(start==NULL)
                    {
                        start=t;
                        t->next=NULL;
                    }
                    else
                    {
                        t->next=start;
                        start=t;
                    }
}
void insert_last()
{
                    if(start==NULL)
                    {
                        start=rear=d=q=t;
                        t->next=NULL;
                    }
                    else
                    {
                        rear->next=t;
                        t->next=NULL;
                        rear=t;
                    }
}
void insert_atany(int l)
{   int i=1;
     printf("\nenter the location after ");
                scanf("%i",&l);
                n=create_node(p);
                while(i<=l)
                {
                    save=d;
                    d=d->next;
                    i++;
                }
                n->next=save->next;
                save->next=n;
}
void delete(int e)
{
     printf("enter the element to delete");
                scanf("%i",&e);
                while(d->info!=e)
                {
                    save=d;
                    d=d->next;
                }
                save->next=d->next;
                d->next=NULL;
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
