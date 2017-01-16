#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,temp,j;
  clrscr();
   printf("enter the value");
   {
   for(i=0;i<=4;i++)
   scanf("%d",&a[i]);
   }
   for(i=0;i<=4;i++)
   {
     for(j=0;j<=i;j++)

       if(a[i]<a[j])
	 {
	  temp=a[i];
	  a[i]=a[j];
	   a[j]=temp;
	  }
      }
     printf("final array");

     for(i=0;i<=4;i++)
     {
     printf("%d",a[i]);
     }
getch();
}



