#include<iostream>
using namespace std;
int main()
{
    int a[10],i,pos,elem,t,size,elem1,p;
    char ch='y';
    cout<<"enter the size of array";
    cin>>size;
    cout<<"\nenter the elements of array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
    do
    {
        cout<<"\n enter the element to be inserted";
        cin>>elem;
        cout<<"\nenter the position";
        cin>>pos;
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        t=i;
    }
    a[t]=elem;
    size++;
    cout<<"\narray after insertion is";
     for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"want to enter more(y/n)";
    cin>>ch;
    }while(ch=='y');
    cout<<"enter the element to delete";
    cin>>elem1;
    for(i=0;i<size;i++)
    {
        if(a[i]==elem1)
            p=i;
    }
    for(i=p;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
}
