#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 5
struct stack
{
  int top;
  char data[MAX];
}typedef stack;
void push(stack *, char);
char pop(stack *);
//void disply();

void main()
{
 // int choice;
   int i;
  char rs;
  char data[MAX]="yyys";
  stack my_stack;     // my_stack is variable of stack
  my_stack.top=-1;
  clrscr();
  for(i=0;data[i]!='\0';i++)
      push(&my_stack,data[i]);
      for(i=0;i<=4;i++)
   {
     rs=pop(&my_stack);
     if(rs==-1)
     break;
     printf("\n%c",rs);
      }
   getch();
   }


 void push(stack *sp,char elem)
 {
   if(sp->top==MAX-1)
   {
       printf("\nstack is overflow");
	return;
    }
      sp->top=sp->top+1;
   sp->data[sp->top]=elem;
   return;
 }

char pop(stack *sp)
{
 char elem;
  if(sp->top==-1)
  {
  printf("\nstack is underflow");
  return -1;
  }

 elem=sp->data[sp->top];
 sp->top=sp->top-1;
 return elem;
}
