#include<stdio.h>
#include<conio.h>

fun (int);
void main()
{
int a,b;
clrscr();
printf("enter the valu of a");
scanf("%d",&a);
b=fun(a);
if(b==0)
{
printf("no is not prime no");
}
else
{
printf("no is prime");
}

getch();
}
int fun(int a)
{
int i;
for(i=2; i<(a/2)+1; i++)
{
  if(a%i==0)
    return 0;
}
return 1;
}