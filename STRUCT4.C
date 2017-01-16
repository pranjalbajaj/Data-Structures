#include<stdio.h>
#include<conio.h>
void disply (char *,char *,int);
void main()
{
   struct book
   {
     char name[25];
     char author[25];
     int callno;
   };
   struct book b1={"let us c","ypk",101};
   disply(b1.name,b1.author,b1.callno);
getch();
}
void disply(char*s,char*t,int n)
{
  printf("\n%s %s %d",s,t,n);
}

