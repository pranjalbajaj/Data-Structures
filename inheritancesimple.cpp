#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    int get1()
    {
        cout<<"enterr the number 1";
        cin>>a;
        return a;
    }
    int get2()
    {
        cout<<"enter the number 2";
        cin>>b;
        return b;
    }
};
class B:public A
{
    int c;
    public:
    int product()
    {
        c=get1()*get2();
        return c;
    }
};
int main()
{
    B obj;
    cout<<obj.product();
    return 0;
}
