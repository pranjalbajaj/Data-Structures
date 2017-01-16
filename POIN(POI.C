#include<stdio.h>
#include<conio.h>
void main()
{
int a=100;

int *p; // p is a pointer to an integer
clrscr();
p=&a;   // p holds add of a
printf("add of a %d",*p);
getch();
}
