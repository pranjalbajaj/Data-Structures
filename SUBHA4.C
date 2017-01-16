 #include<stdio.h>
 #include<conio.h>

 void fun(int x);
 void main()
 {
 int x;
 clrscr();
 printf("enter the value");
 scanf("%d",&x);
 fun(x);
 getch();
 }
 void fun(int x)
 {
 if (x>0)
 {
 printf("%d",x);
 fun(x/10);
 }
 }

