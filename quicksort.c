#include<stdio.h>
#define max 20
int pivot(int a[],int l,int h)
{
    int temp,pos;
    temp=a[l];
    while(l<h)
    {
        while((temp<=a[h]) && (l<h))
            h=h-1;
        if(l<h)
        {
            a[l]=a[h];
            l=l+1;
            while((temp>=a[l]) && (l<h))
                l=l+1;
            if(l<h)
            {
                a[h]=a[l];
                h=h-1;
            }
        }
    }
    a[l]=temp;
    pos=l;
    return(pos);
}
void qsort(int a[],int low,int high)
{
    int place;
    place=pivot(a,low,high);
    if(low<high)
    {
        qsort(a,low,place-1);
        qsort(a,place+1,high);
    }
}
void print(int a[],int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d\n",a[i]);
 }
 void main()
 {
     int a[max];
     int i,n;
     printf("Enter the no of elements of array:");
     scanf("%d",&n);
     printf("Enter elements of array to sort:");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     qsort(a,0,n-1);
     printf("The sorted element is:\n");
     print(a,n);
 }
