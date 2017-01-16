#include<stdlib.h>
#include<stdio.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node ** tree, int val)
{
    printf("value of tree=%i\n",tree);
    printf("value at tree i.e *tree=%i\n",*tree);
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        printf("address of node created=%i\n",temp);
        printf("address of left field of node created=%i\n",&(temp->left));
        printf("address of right field of node created=%i\n",&(temp->right));
        temp->left = temp->right = NULL;
         temp->data = val;
        *tree = temp;
        printf("value of tree=%i\n",tree);
        printf("updated value at tree i.e *tree=%i\n",*tree);
        printf("return to calling function\n");
        printf("\n");
        return;
    }

    if(val < (*tree)->data)
    {
        printf("calling insert to insert into left field of node\n");
        printf("address of node in which insertion is done to left field=%i\n",*tree);
        printf("now tree will hold the address of left field of node\n");
        insert(&(*tree)->left, val);
        printf("insertion into left field finished\n");
        printf("\n");
    }
    else if(val > (*tree)->data)
    {
        printf("calling insert to insert into right field of node\n");
        printf("address of node in which insertion is done to right field=%i\n",*tree);
        printf("now tree will hold the address of left field of node\n");
        insert(&(*tree)->right, val);
        printf("insertion into right field finished\n");
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node ** tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }

    if(val < (*tree)->data)
    {
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data)
    {
        return *tree;
    }
}

void main()
{
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    printf("1st running insert(&root, 9)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 9);
    printf("2nd running insert(&root, 4)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 4);
    printf("3rd running insert(&root, 15)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 15);
     printf("4th running insert(&root, 6)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 6);
     printf("5th running insert(&root, 12)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 12);
     printf("6th running insert(&root, 17)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 17);
    printf("7th running insert(&root, 2)\n");
    printf("value of &root=%i is passed to tree i.e tree=&root=%i\n",&root,&root);
    insert(&root, 2);


    /* Printing nodes of tree */
    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Order Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);

    /* Search node into tree */
    tmp = search(&root, 4);
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }

    /* Deleting all nodes of tree */
    deltree(root);
}
