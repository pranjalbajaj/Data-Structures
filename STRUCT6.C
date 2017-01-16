#include<stdio.h>
#include<conio.h>
void main()
{
   struct book
   {

   char name[25];
   char author[25];
   int callno;
   };
   struct book b1={"djwwd","wshw",26};
   struct book *p;
   p=&b1;

   printf("\n %s %s %d",p->name,p->author,p->callno);
getch();
}

