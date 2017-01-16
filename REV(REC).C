#include<stdio.h>
#include<conio.h>
void rev(int a);
void main()
{
int a,i;
clrscr();
printf("enter the valu");
scanf("%d",&a);
rev(a);
getch();
}
void rev(int a)
{
 int s;
if(a>0)
{
s=rev(a-1);
printf("%d",s);
}
}