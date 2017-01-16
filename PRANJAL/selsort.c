#include<stdio.h>
int main()
{
    int a[5],low,t,k,i,j;
    printf("enter the elements of aaray");
    for(i=0;i<5;i++)
    {
        scanf("%i",&a[i]);
    }
    for(j=0;j<5;j++)
    {
        k=j;
        low=a[j];
        i=j+1;
        while(i<5)
        {
            if(a[i]<low)
            {
                low=a[i];
                k=i;
            }
            i++;
        }
    t=a[j];
    a[j]=low;
    a[k]=t;
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%i\t",a[i]);
    }
}
