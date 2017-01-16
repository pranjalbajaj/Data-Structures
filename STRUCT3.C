#include<stdio.h>
#include<conio.h>
void main()
{
   struct address
   {
     char phone[15];
     char city[25];
     int pin;
   };
   struct emp
   {
      char name[25];
      struct address a;
   };
   struct emp e={"subha","2442","bhilai",10};
   printf("\nname =%s phone=%s city=%s pin=%d",e.name,e.a.phone,e.a.city,e.a.pin);
getch();
}
