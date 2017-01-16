#include<stdio.h>
#include<conio.h>
int main()
{
int a=100;  // a is an integer
int *p;     // p is a pointer to an integer
int **q;    // q is a pointer to an int pointer
//clrscr();
p=&a;       // p holds add of int a
q=&p;       // q holds add of int pointer p
printf("\n add of a %u",&a);
printf("\n add of p %u",&p);
printf("\n add of q %u",&q);
printf("\n value of a %d",a);
printf("\n value of p %i",p);
printf("\n value of q %i",q);
printf("\n *p is %d",*p);
printf("\n *q is %u",*q);
printf("\n **q is %u",**q);


getch();
}
