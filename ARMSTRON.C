#include<stdio.h>
#include<conio.h>
int arm (int x);
void main()
{
int x,r;
clrscr();
printf("enter the value");
scanf("%d",&x);
r=arm(x);
if(r==0)
{
  printf("the no is armstrong no.");
}
else
{
  printf("the no.is not arm");
}
getch();
}
int arm(int x)
{
int a,b,d;
 int s=0;
b=x;
while(x>0)
{
 a=x%10;
 d=(a*a*a);
 s=s+d;
 x=x/10;
 }
if (s==b)
    return 0;
else
    return 1;

}
