#include<stdio.h>
#include<conio.h>
int i,len;
void delet(int a[],int,int);
int main()
{
   int a[10],pos;
  // clrscr();
   printf("enter the no to be read");
   scanf("%d",&len);
   printf("enter the no");
   {
      for(i=0;i<=len-1;i++)
      scanf("%d",&a[i]);
   }
   printf("enter the position");
   scanf("%d",&pos);
   --pos;
   delet(a,len,pos);
 // printf("final arrary");
 //  {
 //     for(i=0;i<=len-1;i++)
 //  }
getch();
return 0;

}
void delet(int a[],int len,int pos)
{
  int j,item;
  item=a[pos];
  for(j=pos;j<=len-1;j++)
  {
  a[j]=a[j+1];
  }
len=len-1;
printf("\nitem=%d",item);

  printf("\nnew array\n");
  for(i=0;i<=len-1;i++)
   printf("%d\n",a[i]);
}
