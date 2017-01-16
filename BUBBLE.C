#include<stdio.h>
#include<conio.h>
void bubble(int a[]);
void main()
{
int a[5],i;
clrscr();
printf("enter the element");
for(i=0;i<=4;i++)
  {
    scanf("%d",&a[i]);
  }
bubble(a);

for(i=0;i<=4;i++)
{
  printf("%d",a[i]);
}
getch();
}
void bubble(int a[])
{
 int j,temp,i;
 for(i=0;i<=4;i++)
 {
   for(j=0;j<5-i-1;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
  }
}


