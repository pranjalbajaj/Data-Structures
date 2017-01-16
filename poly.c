#include<stdio.h>
#define max 10
struct term
{
    int coef;
    int exp;
};
struct poly
{
    struct term t[max];
    int count;
};
void initpoly(struct poly *p)
{
    int i;
    p->count=0;
    for(i=0;i<max-1;i++)
    {
        p->t[i].coef=0;
        p->t[i].exp=0;
    }
}
void makepoly(struct poly *p,int c,int e)
{
    p->t[p->count].coef=c;
    p->t[p->count].exp=e;
    (p->count)++;
}
void dispoly(struct poly p)
{
    int i;
    printf("--Coefficient-- -Exponent--\n");
    for(i=0;i<p.count;i++)
        printf("%5d\t\t%5d\n",p.t[i].coef,p.t[i].exp);
}
struct  poly addpoly(struct poly p1,struct poly p2)
{
    struct poly p3;
    int i,j,cnt1,cnt2;
    initpoly(&p3);
    cnt1=p1.count;
    cnt2=p2.count;
    i=0;j=0;
    while((i<cnt1) && (j<cnt2))
    {
        if(p1.t[i].exp==p2.t[j].exp)
        {
            p3.t[p3.count].coef=p1.t[i].coef+p2.t[j].coef;
            p3.t[p3.count].exp=p1.t[i].exp;
            i++;
            j++;
            p3.count++;
        }
    else if(p1.t[i].exp>p2.t[j].exp)
        {
            p3.t[p3.count].coef=p1.t[i].coef;
            p3.t[p3.count].exp=p1.t[i].exp;
            i++;;
            p3.count++;
        }
    else if(p1.t[i].exp<p2.t[j].exp)
    {
            p3.t[p3.count].coef=p2.t[j].coef;
            p3.t[p3.count].exp=p2.t[j].exp;
            j++;
            p3.count++;
    }
}
    while(i<cnt1)
    {
         p3.t[p3.count].coef=p1.t[i].coef;
            p3.t[p3.count].exp=p1.t[i].exp;
            i++;;
            p3.count++;
    }
    while(j<cnt2)
    {
        p3.t[p3.count].coef=p2.t[j].coef;
            p3.t[p3.count].exp=p2.t[j].exp;
            j++;
            p3.count++;
    }
    return (p3);
};
int main()
{
    char ch='y';
    int c,e;
    struct poly p1,p2,p3;
    initpoly(&p1);
    initpoly(&p2);
    initpoly(&p3);
    makepoly(&p1,1,7);
    makepoly(&p1,2,6);
    makepoly(&p1,3,5);
    makepoly(&p1,5,2);
    makepoly(&p2,1,3);
    makepoly(&p2,2,2);
    makepoly(&p2,1,1);
    makepoly(&p2,4,0);
    p3= addpoly( p1, p2);
    printf("For first polynomial:\n");
    dispoly(p1);
    printf("For second polynomial:\n");
    dispoly(p2);
    printf("For resultant polynomial:\n");
    dispoly(p3);
 }
