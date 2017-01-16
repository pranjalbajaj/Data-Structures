#include<stdio.h>
#include<malloc.h>
struct nodetag
{
    char info;
    struct nodetag * left;
    struct nodetag * right;
    struct nodetag * father;
};
typedef struct nodetag  node;
node * getnode()
{
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    return (newnode);
}
int isleft(node *p)
{
    node *q=p->father;
    if(q==NULL)
    return (-1);
    if(q->left==p)
    return(1);
    else
    return(-1);
}
int isright(node *p)
{
    node *q=p->father;
    if(q==NULL)
    return (-1);
    if(q->right==p)
    return(1);
    else
    return(-1);
}
node *makenode(int x)
{
    node *p;
    p=getnode();
    p->info=x;
    p->left=NULL;
    p->right=NULL;
    return(p);
}
void setleft(node *p,int x)
{
    if(p==NULL)
    printf("void insertion");
    else
    if(p->left!=NULL)
    printf("invalid insertion");
    else
    p->left=makenode(x);
}
void setright(node *p,int x)
{
    if(p==NULL)
    printf("void insertion");
    else
    if(p->right!=NULL)
    printf("invalid insertion");
    else
    p->right=makenode(x);
}
void intraverse(node *tree)
{

    if(tree != NULL)
    {
        intraverse(tree->left);
        printf("%i \t",tree->info);
        intraverse(tree->right);
    }
}
void pretraverse(node *tree)
{

    if(tree != NULL)
    {
        printf("%i \t",tree->info);
	 pretraverse(tree->left);
         pretraverse(tree->right);
    }
}
void posttraverse(node *tree)
{

    if(tree != NULL)
    {
        posttraverse(tree->left);
        posttraverse(tree->right);
	 printf("%i \t",tree->info);
    }
}

int main()
{
    node *pt,*p,*q;
    int arr[10],i;
    printf("enter the elemnts of array \n");
    for(i=0;i<7;i++)
    scanf("%i",&arr[i]);
    if(arr[0]!=999)
        pt=makenode(arr[0]);
    for(i=1;(i<7 && arr[i]!=999);i++)
    {


            p=q=pt;
            while((arr[i]!=p->info)&&(q!=NULL))
            {
                p=q;
                if(arr[i] < p->info)
                    q=p->left;
                else
                    q=p->right;
            }

            if (arr[i]==p->info)
            {
                printf("duplicate value found %d\n",p->info);
            }
            else
            {
                if(arr[i]<(p->info))
                    setleft(p,arr[i]);
                else
                    setright(p,arr[i]);
            }



}
printf("\n in traverse \n");
intraverse(pt);
printf("\n pre traverse \n");
pretraverse(pt);
printf("\n posttraverse \n");
posttraverse(pt);
return 0;
}




