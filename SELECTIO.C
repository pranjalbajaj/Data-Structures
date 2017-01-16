#include<stdio.h>
#include<conio.h>
void selection(int a[] );
void main()
{
  int a[5],i;
  clrscr();
  printf("enter the no");
  for(i=0;i<=4;i++)
  {
  scanf("%d",&a[i]);
  }
  selection(a);

  printf("sorted array");
  for(i=0;i<=4;i++)
  {
  printf("%d",a[i]);
  }
  getch();
}
void selection(int a[])
{
int min,loc,j,temp,i;
min=a[0];
for(i=0;i<=4;i++)
  {
    min=a[i];
    loc=i;
    for(j=i+1;j<=4;j++)
     {
       if(min>a[j])
	{
	  min=a[j];
	  loc=j;
	}
     }
     if(loc!=i)
       {
	 temp=a[i];
	 a[i]=a[loc];
	 a[loc]=temp;
       }
  }
}

