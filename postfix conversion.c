#include<stdio.h>
#include<string.h>
#define max 30
 typedef struct
 {
     char stack[max];
     int top;
 }stk;
 void pushitem(stk *st,char symb)
 {
     if(st->top==max-1)
     {
         printf("stack overflow\n");
     }
     else
     {
         st->top++;
         st->stack[st->top]=symb;
     }
 }
 char pop(stk *st)
 {
     char i;
     if(st->top==-1)
     {
         printf("stack undeflow\n");
         return(-1);
     }
     else
     {
         i=st->stack[st->top];
         st->top--;
         return(i);
      }
 }
 int empty(stk *s)
 {
     if(s->top==-1)
     {
         return(1);
    }
    else
        return(0);
 }
 int prcd(char c,char d)
 {
     if(((c=='+') && (d=='*')) ||((c=='-') && (d=='*')) ||((c=='+') && (d=='/')) || ((c=='-') && (d=='/')) || (((c=='=') || (c=='-') || (c=='*') || (c=='/'))&&(d=='(')) ||((c=='(') && ((c=='=') || (c=='-') || (c=='*') || (c=='/'))))
                                  return 0;
     else
        return 1;
 }
 char stacktop(stk s)
 {
     int x;
     x=s.stack[s.top];
 }
 int isoperand(char c)
 {
     if(((c>=65) && (c<=90)) ||(c>=97) && (c<=122))
        return 1;
     else
        return 0;
 }
 void conv(char infix[])
 {
     char postfix[max];
     int k,r;
     char symb,topsymb;
     stk s;
     s.top=-1;
     int i=0,j=-1;
     r=strlen(infix);
     while(i<r)
     {
         symb=infix[i];
         if(isoperand(symb))
                postfix[++j]=symb;
         else
         {
             while(!empty(&s) && prcd(stacktop(s),symb))
             {
                 topsymb=pop(&s);
                 if(topsymb!='(')
                        postfix[++j]=topsymb;
                 else
                    break;
             }//end of inner while loop
             if(topsymb=='(')
                    continue;
             if(empty(&s)||(symb!=')'))
                    pushitem(&s,symb);
         }//end of else construct
         i++;
     }//end of outer while loop
     while(!empty(&s))
        {
            topsymb=pop(&s);
                postfix[++j]=topsymb;
        }
    puts(postfix);
 }//end of conv() routine
 int main()
 {
     char infix[max];
     printf("Enter infix expression:");
     gets(infix);
     printf("Equivalent Postfix Expression:");
     conv(infix);
 }
