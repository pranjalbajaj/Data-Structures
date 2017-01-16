#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}typedef node;
struct list
{
 node *start;
}typedef list;
void add_first(list *,int);
void add_last(list *,int);
void display(list *);
int main()
{
  int choice,elem;
  list my_list;
  //clrscr();
  my_list.start=NULL;
  printf("operations on LL");
  while(1)
  {
    printf("\n 1.add at the beginnig \n 2.add at last \n 3.display \n 4.exit");
    printf("\nenter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:printf("\nenter the element");
	     scanf("%d",&elem);
	     add_first(&my_list,elem);
	     break;
      case 2:printf("enter the element");
	     scanf("%d",&elem);
	     add_last(&my_list,elem);
	     break;
     case 3:display(&my_list);
	     break;
      case 4:exit(0);
	     break;
     } //end of switch
   } //end of while
 }// end of main

// function to add node at the first//
void add_first(list *lp,int elem)
{
  node *newnode;
  newnode=(node *)malloc(sizeof(node));
  newnode->data=elem;
  if(lp->start==NULL)
  {
    newnode->next=NULL;
    lp->start=newnode;
      return;
   }
   newnode->next=lp->start;
   lp->start=newnode;
}
// function to add node at the last//
void add_last(list *lp,int elem)
{

 node *newnode,*temp;
 newnode=(node *)malloc(sizeof(node));
 newnode->data=elem;
 newnode->next=NULL;
 temp=lp->start;
 if(lp->start==NULL)
 {
  lp->start=newnode;
  return;
  }
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=newnode;
} // ent of function
// function of display
void display(list *lp)
{
node *temp;
temp=lp->start;
while(temp!=NULL)
{
 printf("%d",temp->data);
 temp=temp->next;
}
}//end of function






