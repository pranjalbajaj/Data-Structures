#include<stdio.h>
#include<conio.h>
void series(int);
void main()
{
  int n;
  clrscr();
  printf("\nEnter n ");
  scanf("%d",&n);
  series(n);
  getch();
}

void series(int x)
{
 if(x>0)
 {
   series(x-1);
   printf(" %d ",x);
  }
}

