#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   struct employee
   {
      char name[10];
      int age;
      float salary;
   };
   struct employee e1={"subha",27,1950.50};
   struct employee e2,e3;
   /*piece-meal copying*/
   strcpy(e2.name,e1.name);
   e2.age=e1.age;
   e2.salary=e1.salary;
   e3=e2;
   printf("\n %s %d %f",e1.name,e1.age,e1.salary);
   printf("\n %s %d %f",e2.name,e2.age,e2.salary);
   printf("\n %s %d %f",e3.name,e3.age,e3.salary);
getch();
}