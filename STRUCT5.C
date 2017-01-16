#include<stdio.h>
#include<conio.h>
struct book
{
   char name[25];
   char author[25];
   int callno;
};
void disply(struct book);
void main()
{
struct book b1={"jwhdjw","xnsj",28};
clrscr();
disply(b1);
getch();
}
void disply(struct book b1)

{
printf("\n %s %s %d",b1.name,b1.author,b1.callno);
}
