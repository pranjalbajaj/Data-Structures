#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    int getnum1()
    {
        cout<<"enter the number 1"<<endl;
        cin>>a;
        return a;
    }
};
class B
{
    int b;
    public:
          int getnum2()
    {
        cout<<"enter the number 1"<<endl;
        cin>>b;
        return b;
    }
};
class C:public A,public B
{
    int d;
    public:
    int prod()
    {
        d=getnum1()*getnum2();
        cout<<"product"<<d;
        return d;
    }
};

int main()
{

    C obj2;


    obj2.prod();
    return 0;
}
