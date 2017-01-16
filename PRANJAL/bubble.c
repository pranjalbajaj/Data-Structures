#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("enter the elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%i",&a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%i\t",a[i]);
    }

     for(j=0;j<5;j++)
     {  int i=1;
    while(i<5-j)
    {
        if(a[i]>a[i+1])
        {
            int t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
        }
        i++;
    }
    }
    printf("the sorted array is");
    for(i=0;i<5;i++)
    {
        printf("%i\t",a[i]);
    }
}
