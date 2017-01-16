#include<stdio.h>
int main()
{
    char a[20],s[10];
    int top=-1,i; int opd1,opd2;
    printf("enter the string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='+' && a[i]!='-' && a[i]!='*' && a[i]!='/')
        {
            top++;
            printf("top=%i\t",top);
            s[top]=a[i];
            printf("s[%i]=%c\n",top,s[top]);
        }
        else
        {
            printf("top elem is=%c\n",s[top]);
            opd1=s[top]-48;
            printf("opd1=%i",opd1);
            top--;
            printf("\ntop=%i",top);
            opd2=s[top]-48;
            printf("\nopd2=%i",opd2);
            switch(a[i])
            {
                case '+': s[top]=opd1+opd2+48;
                            printf("\ns[%i]=%c",top,s[top]);
                            break;

                case '-': s[top]=opd2-opd1+48;
                            printf("\ns[%i]=%c",top,s[top]);
                            break;

                case '*': s[top]=opd1*opd2+48;
                            printf("\ns[%i]=%c",top,s[top]);
                            break;

                case '/': s[top]=(opd2/opd1)+48;
                            printf("\ns[%i]=%c",top,s[top]);
                            break;
            }
        }

    }
    printf("the ans is %i",s[top]-48);

}
