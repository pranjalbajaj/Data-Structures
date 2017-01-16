#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 5
struct stack
{
  int top;
  char data[MAX];
}typedef stack;
void push(stack *,char);
char pop(stack*);
void main()
{
stack my_stack;
char pal;
int i,flag;
char data[MAX]="madam";

my_stack.top=-1;
clrscr();

for(i=0;data[i]!='\0';i++)
 push(&my_stack,data[i]);

  for(i=0;i<=MAX-1;i++)
   {
    pal=pop(&my_stack);
    if(pal==-1)
    break;
    if(pal==data[i])
    flag=1;
    else
    {
    flag=0;
    break;
    }
  }
 if(flag==1)
 {
 printf("palindrom");
 }
 else
 {
 printf("not palin");
 }
 getch();
 }
 void push(stack *sp,char elem)
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
char pop(stack *sp)
{
 char pop;
 if(sp->top==-1)
 {
 printf("stack is underflow");
 return -1;
 }
 else
 pop=sp->data[sp->top];
 sp->top=sp->top-1;
 return pop;
 }



