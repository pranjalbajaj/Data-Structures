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
    if(tree)
    {
       printf("%i\t",tree->data);
       preorder(tree->left);
       preorder(tree->right);
    }
}
void inorder(node *tree)
{
    if(tree)
    {
        inorder(tree->left);
        printf("%i\t",tree->data);
        inorder(tree->right);
    }
}
void postorder(node *tree)
{
    if(tree)
    {
        postorder(tree->left);
        inorder(tree->right);
        printf("%i\t",tree->data);
    }
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
