#include<stdio.h>
struct term
{
    int coef;
    int exp;
};
struct poly
{
    struct term t[10];
};
struct poly p1;
int i=0;
void insertpoly(int c,int e)
{
   p1.t[i].coef=c;
   p1.t[i].exp=e;
   i++;
}
void dispoly()
{
    int j;
    printf("-----coef------------exp---------");
    for(j=0;j<i;j++)
    {
        printf("\n%5d\t\t%5d",p1.t[j].coef,p1.t[j].exp);
    }
}
int main()
{

    insertpoly(2,7);
    insertpoly(3,6);
    insertpoly(9,4);
    insertpoly(5,2);
    dispoly();
}
