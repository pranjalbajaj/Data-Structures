#include<stdio.h>
#include<conio.h>
 sum(int a);
void main()
{
int a,b;
clrscr();
printf("enter the no");
scanf("%d",&a);
b= sum(a);
printf("%d",b);
getch();
}
int sum(int a)
{
int n;
static int s=0;    // executed only once

if(a!=0)
   {
     s=s*10+a%10 ;
     n= sum(a/10);
   }
   return s;
}