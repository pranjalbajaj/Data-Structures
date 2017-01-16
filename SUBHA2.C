#include<stdio.h>
#include<conio.h>
 fun (int);
void main()
{
int a,b;
clrscr();
printf("printf enter the value");
scanf("%d",&a);
fun (a);
b=fun(a);
printf("%d",b);
getch();
}
int fun (int a)
{
int k;
int f=1;
for(k=1;k<=a;k++)
{
f=(f*k);
}
return f  ;
}