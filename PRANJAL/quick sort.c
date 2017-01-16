#include<stdio.h>
int pos;
int popl(int lower[],int top)
{
    return lower[top];
}
int popu(int upper[],int top)
{
    return upper[top];
}
void pushl(int lower[],int beg,int top)
{
    lower[top]=beg;
}
void pushu(int upper[],int last,int top)
{
    upper[top]=last;
}
void quick(int a[],int l,int r)
{
    int temp;
    while(r>l)
    {
        while(a[r]>a[l])
        {
            r--;
        }
        if(a[l]>a[r])
        {
           temp=a[r];
           a[r]=a[l];
           a[l]=temp;
        }
        while(a[r]>a[l])
        {
            l++;
        }
        if(a[l]>a[r])
        {
           temp=a[r];
           a[r]=a[l];
           a[l]=temp;
        }
    }
    pos=l;
    printf("%i",pos);
}
int main()
{
    int a[20],n,i;
    printf("enter the no of elements");
    scanf("%i",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
    }
    int beg,last;
    int lower[10],upper[10];
    int top=-1;
    lower[0]=0;
    upper[0]=n-1;
    top++;
    while(top!=-1)
    {beg=popl(lower,top);
    last=popu(upper,top);
    top--;
    quick(a,beg,last);
    if(beg<pos-1)
    {
        top++;
        pushl(lower,beg,top);
        pushu(upper,pos-1,top);
    }
    if(last>pos+1)
    {
        top++;
        pushl(lower,pos+1,top);
        pushu(upper,last,top);
    }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%i\t",a[i]);
    }
}
