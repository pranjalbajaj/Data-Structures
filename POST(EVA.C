#include<stdio.h>
#include<conio.h>
#include<Math.h>
#define MAX 16
struct stack
{
  int top;
  char data[MAX];
}typedef stack;

void push(stack *,int);
int pop(stack *);
int i;
int main()
{

  int operand1,operand2,ans;
  char data[MAX];

  int i;
  stack my_stack;
  my_stack.top=-1;
 // clrscr();
  printf("Enter the postfix expression");
  gets(data);

  for(i=0;data[i]!='\0';i++)
{

  if(data[i]!='+' && data[i]!='*' && data[i]!='-' && data[i]!='/' && data[i]!='$')
  {
     push( &my_stack ,data[i]);
   }
  else
  {
  operand2 =pop(&my_stack) ;
  operand1= pop(&my_stack);
    switch(data[i])
    {
      case '*':ans=(operand1*operand2);
	       break;
      case '+':ans=(operand1+operand2);
	       break;
      case '-':ans=(operand1-operand2);
	       break;
      case '/':ans=(operand1/operand2);
	       break;
      case '^':ans=pow(operand1,operand2);
	       break;
     }  //end of switch
    push(&my_stack,ans);
   }   //end of else

 } //end of for

  printf("\n the ans is=%d",pop(&my_stack));
 getch();

 }


void push(stack *sp,int elem)
  {
   if(sp->top==MAX-1)
    {
    printf("stack is full");
    return;
    }
    sp->top=sp->top+1;
    sp->data[sp->top]=elem;
 }


 int pop(stack *sp)
 {
  int  pop_elem;
   if(sp->top==-1)
   {
   printf("stack is underflow");
   return -1;
   }
   pop_elem=sp->data[sp->top];
   sp->top=sp->top-1;
   return pop_elem;
 }




