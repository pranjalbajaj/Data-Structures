#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[10];
public:
    int getroll()
    {
        cout<<"Enter roll no. :"<<endl;
        cin>>rollno;
        return rollno;
    }
    char* getname()
    {
        cout<<"Enter name :"<<endl;
        cin>>name;
        return (name);
    }
};
class test: public student
{
    int s1,s2;
public:
    int gets1()
    {
        cout<<"Enter marks of subject 1 "<<endl;
        cin>>s1;
        return s1;
    }
    int gets2()
    {
        cout<<"Enter marks of subject 2 "<<endl;
        cin>>s2;
        return s2;
    }
};

class result:public test
{
    int total,r;
    char *n;
public:
    void show()
    {
        n=getname();
        r=getroll();
        total=gets1()+gets2();
        cout<<"Roll No.:"<<r<<endl;
        cout<<"Name :"<<n<<endl;
        cout<<"Total marks:"<<total;

    }
};
int main()
{
    result obj;
    obj.show();
    return 0;

}
