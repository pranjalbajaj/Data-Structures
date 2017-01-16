#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,num,f=0;
clrscr();

printf("enter the  no");
   {
     for(i=0;i<=3;i++)
     scanf("%d",&a[i]);
   }
   printf("enter the no.");
   scanf("%d",&num);

   for(i=0;i<=3;i++)
   {
   if(num==a[i])
   {
   printf("the no is found");

    f=1;
    break;
   }


   }
   if(f==0)
   {
   printf("the no is not found");
   }
getch();
}
