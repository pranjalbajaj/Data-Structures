#include<stdio.h>
#include<conio.h>
int i,len,num,pos;
void insert(int a[],int ,int ,int);


void main()
{
int a[10];
clrscr();
printf("enter the integers to bo read");
scanf("%d",&len);
printf("enter the value ");
    for(i=0;i<=len-1;i++)
     {
       scanf("%d",&a[i]);
     }
 printf("enter the no to be inserted");
 scanf("%d",&num);
    printf("enter the position ");
    scanf("%d",&pos);
    --pos;
    insert(a,len,pos,num);
    printf("final array");

      for(i=0;i<=len;i++)
      {
      printf("%d",a[i]);
      }
    getch();
}
void insert(int a[],int len,int pos,int num)
   {

       for(i=len-1;i>=pos;i--)
       {
	 a[i+1]=a[i];
       }
    a[i+1]=num; // or a[pos]=num
    }
