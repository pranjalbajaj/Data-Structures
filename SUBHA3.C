#include<stdio.h>
#include<conio.h>
sum (int a);
void main()
{
int a,b;
clrscr();
printf("enter the no");
scanf("%d",&a);
b=sum(a);
printf("%d",b);
getch();
}
int sum (int a)
{
int  d  ;
static int s=0;
  if(a!=0)
  {
   d=a%10; //right most digit
   s = s + d;  //
  a=a/10;
   sum(a);
  }

    return s;
}