#include<stdio.h>
#include<conio.h>
#define MAX 5
struct stack
{
   int top;
   int data[MAX];
   }typedef stack;

void push(stack *,int);
int pop(stack *);
void display();

void main()
{
 int p,choice,del_elem;
 stack my_stack;    //my_stack is the variable of stack
 clrscr();
 my_stack.top=-1;
 while(1)
 {
 printf("\nEnter the choice");
 scanf("%d",&choice);
   switch(choice)
   {
     case 1:printf("enter the element ");

	    scanf("%d",&p);
	    push(&my_stack,p);
	    break;

     case 2:del_elem=pop(&my_stack);
	    printf("\nThe popped element is %d",del_elem);

	    break;

     case 3:
	    display(my_stack);
	    break;

      case 4:
	     exit();
	     }
	  }
//getch();

}

void push(stack *sp,int elem)
{
  if(sp->top==MAX-1)
  {   	 printf("Stack overflow");
     return;
      }
     sp->top=sp->top+1;
     sp->data[sp->top]=elem;
     return;
 }

 int pop(stack *sp)
 {
   int elem;
   if(sp->top==-1)
   {
     printf("Stack Underflow");
     return -1;
     }
     elem=sp->data[sp->top];
     sp->top=sp->top-1;
     return elem;
   }

void display(stack sp)
{
  int i;
  if(sp.top==-1)
  {
    printf("\nStack is empty");
    return;
    }
   printf("\nstack is as follow");
   for(i=sp.top;i>=0;i--)
   {
      printf("\n%d",sp.data[i]);
      }
 }