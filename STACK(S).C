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
void disply();
void main()
{
  int choice,p,pop_ele;
  stack my_stack;//my_stack is variable of stack
  my_stack.top=-1;
  clrscr();

  while(1)
  {
  printf("\n enter choice \n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT");
  scanf("%d",&choice);
    switch (choice)
     {
      case 1:printf("enter the element");
	     scanf("%d",&p);
	     push(&my_stack,p);
	     break;
      case 2:pop_ele=pop(&my_stack);
	     printf("\n deled item %d",pop_ele);
	     break;
      case 3:disply(my_stack);
	     break;
      case 4:exit();
      }
    }
 // getch();
 }
 void push(stack *sp,int elem)
 {
   if(sp->top==MAX-1)
   {
	printf("stack is overflow");
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
 printf("\n stack is underflow");
 return -1;
 }
 else
 {
elem=sp->data[sp->top];
sp->top=sp->top-1;
return elem;
}
}
void disply(stack sp)
{
int i;
if(sp.top==-1)
{
printf("\n empty");
return;
}
else
{
printf("\nthe stack is as follow");
for(i=sp.top;i>=0;i--)
{
printf("\n  %d",sp.data[i]);
}
}
}







