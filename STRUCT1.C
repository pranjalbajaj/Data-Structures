#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
   struct book
   {
      char name;
      float price;
      int pages;
   };
   struct book b[5];
   int i;
  // float b[0].price=0.0;
   clrscr();
   for(i=0;i<=4;i++)
   {
      printf("\n enter name,price,pages\n");
      scanf("%c%f%d",b[i].name,&b[i].price,&b[i].pages);
    }
   for(i=0;i<=4;i++)
       printf("\n %c %f %d",b[i].name,b[i].price,b[i].pages);

getch();
}



