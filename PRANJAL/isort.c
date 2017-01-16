#include<stdio.h>
int main()
{
    int a[6],i,k;
    printf("enter the elements of aaray");
    for(i=0;i<6;i++)
    {
        scanf("%i",&a[i]);
    }
    a[0]=0;
    for(k=2;k<6;k++)
    {
        int t=a[k];
        int r=k-1;
        while(t<a[r])
        {
            a[r+1]=a[r];
            r--;
        }
        a[r+1]=t;
    }
    printf("\n");
    for(i=0;i<6;i++)
    {
        printf("%i\t",a[i]);
    }
}
