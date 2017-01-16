#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node * nodeptr;
void insertafter(nodeptr p, int x)
{

    nodeptr q;
    if((p==NULL))
    {
        printf("void insertion \n");
        exit(1);
    }
    q=getnode();
    q->info=x;
    q->next=p->next;
    p->next=q;

}
int deleteafter(nodeptr p,int *px)
{
    nodeptr q;
    if((p==NULL)||(p->next==NULL))
    {
        printf("void deletion \n");
        exit(1);
    }
    q=p->next;
    *px=q->info;
    p->next=q->next;
    freenode(q);

}
nodeptr getnode()
{
    nodeptr p;
    p=((nodeptr)malloc(sizeof(struct node));
    return (p);
}
main()
{
    int user;
    while(1)
    {
        printf("enter your option \n 1-to insert item \n 2-to delete item \n 3-to exit");
        scanf("%i,&user");
        switch(user)
        {
        case 1:
            {

            }
        }
    }

}
