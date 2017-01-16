#include<stdio.h>
#include<conio.h>
int sum(int a);
void main()
{
int b,a;
printf("enter the value of a");
scanf("%d",&a);
b=sum(a);
printf("%d",b);
getch();
}
int sum(int a)
{
 int s;
 if(a>0)
 {
 s=a+sum(a-1);

return s;
}
}

