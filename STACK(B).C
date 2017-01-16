#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
void push();
void disply();
int pop();
int stack[MAXSIZE];
int top=-1;
void main()
{
   int choice;
   clrscr();
   while(1)
   {
   printf("enter the choice");
   scanf("%d",&choice);
      switch (choice)
      {
	case 1: push();
		 break;
	case 2: printf("\n the popped element %d",pop());
		 break;
	case 3: disply();
		 break;
	case 4: exit();
		 break;
	default: printf("\n wrong choice");
       }
    }
 getch();
 }
 void push()
 {
 int item;
   if(top==MAXSIZE-1)
   {
     printf("\n stack is overflow");
     exit(0);
   }
   else
   {
