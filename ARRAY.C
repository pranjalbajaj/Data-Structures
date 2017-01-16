#include<stdio.h>
#include<conio.h>
void main()

{
   char name[3];
   float price[3];
   int pages[3],i;
   clrscr();
   printf("\n enter name,pries,pages \n ");
   for(i=0;i<=2;i++)
   scanf("%c %f %d",&name[i],&price[i],&pages[i]);
   printf("\n output\n");
   for(i=0;i<=2;i++)
   printf("%c %f %d\n",name[i],price[i],pages[i]);
getch();
}
