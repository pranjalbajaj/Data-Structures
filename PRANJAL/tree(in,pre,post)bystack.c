#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
}typedef node;
void insert(node **tree,int val)
{
    node *p;
    p=NULL;
    if(!(*tree))
    {
      p=(node *)malloc(sizeof(node));
      p->data=val;
      p->left=NULL;
      p->right=NULL;
      *tree=p;
      return;
    }
    if(val<(*tree)->data)
    {
        insert(&((*tree)->left),val);
    }
    else if(val>(*tree)->data)
    {
        insert(&((*tree)->right),val);
    }
}
void preorder(node *tree)
{
    int a[10],top=0;
    a[top]=0;
    while(tree!=NULL)
    {
        printf("%i\t",*tree);
        if(tree->right!=NULL)
        {
            top++;
            a[top]=(tree->right);
        }
        if(tree->left!=NULL)
        {
            tree=tree->left;
        }
        else
        {
            tree=a[top];
            top--;
        }
    }

}
void inorder(node *tree)
{
    int a[10],top=0;
    a[top]=0;
    while(tree!=NULL)
    {
        top++;
        a[top]=tree;
        tree=tree->left;
    }
    tree=a[top];
    top--;
    while(tree!=NULL)
    {
        printf("%i\t",*tree);
        if(tree->right!=NULL)
        {
            tree=tree->right;
            while(tree!=NULL)
            {   top++;
                a[top]=tree;
                tree=tree->left;
            }
        }
        tree=a[top];
        top--;
    }
}
void postorder(node *tree)
{

}
int main()
{
    node *root;
    root=NULL;
    int n,t=0,val;
    printf("enter the no of nodes");
    scanf("%i",&n);
    while(t!=n)
     {
        printf("enter the value of node %i",t+1);
        scanf("%i",&val);
        insert(&root,val);
        t++;
     }
     printf("preorder\n");
     preorder(root);
     printf("\n");
     printf("inorder\n");
     inorder(root);
     printf("\n");
     printf("postorder\n");
     postorder(root);
}
