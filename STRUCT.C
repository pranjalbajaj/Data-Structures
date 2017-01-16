#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i;
     struct book
    {
	char name[24];
	float price;
	int pages;
    }b1,b2,b3;

    clrscr();
       textcolor(RED);

   for(i=0;i<50;i++)
   {
   cprintf("*");
   delay(100);
   }
   printf("\n");
   cprintf(" enter name,prices,pages: ");
   sound(1000);
     delay(1000);
   nosound();
    textcolor(5);
    scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
   // fflush(stdin);
    scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
    //fflush(stdin);
    scanf("%s%f%d",b3.name,&b3.price,&b3.pages);
    cprintf("\n%s %f %d",b1.name,b1.price,b1.pages);
    cprintf("\n%s %f %d",b2.name,b2.price,b2.pages);
     cprintf("\n%s %f %d",b3.name,b3.price,b3.pages);
      getch();
}