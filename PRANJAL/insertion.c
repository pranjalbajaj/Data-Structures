#include<iostream>
using namespace std;
int main()
{
    int a[10],i,pos,elem;
    cout<<"enter the elements of array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n enter the element to be inserted";
    cin>>elem;
    cout<<"\nenter the position";
    cin>>pos;
    for(i=4;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        t=i;
    }
    a[i]=elem;
    cout<<"\narray after insertion is";
     for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }

}
