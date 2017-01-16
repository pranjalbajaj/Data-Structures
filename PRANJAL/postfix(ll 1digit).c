#include<stdio.h>
struct node
{
    char info;
    struct node *next;
}typedef node;
node *p,*t,*b,*top,*r;
int main()
{
    char a[20];
    int i,j=0,k;
    int opd1,opd2;
    top=NULL;
    printf("enter string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='+' && a[i]!='-' && a[i]!='*' && a[i]!='/')
        {
            if(top==NULL)
            {
                p=(node *)malloc(sizeof(node *));
                top=t=b=r=p;
                p->info=a[i];
                p->next=NULL;
            }
            else
            {
                p=(node *)malloc(sizeof(node *));
                t->next=p;
                p->info=a[i];
                p->next=NULL;
                t=p;
            }
            j++;
        }
        else
        {
            opd1=(p->info)-48;
            b=r;
            for(k=0;k<j-2;k++)
            {
                b=b->next;
            }
            j--;
            b->next=NULL;
            opd2=(b->info)-48;
            p=b;
            t=b;
            switch(a[i])
            {
                 case '+': b->info=opd1+opd2+48;
                            break;

                case '-': b->info=opd2-opd1+48;
                            break;

                case '*': b->info=opd1*opd2+48;
                            break;

                case '/': b->info=(opd2/opd1)+48;
                            break;
            }

        }

    }
    printf("ans is %i",(b->info)-48);
}
