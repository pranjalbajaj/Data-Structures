#include<stdio.h>
#include<conio.h>
#define MAX 4
struct lqueue
 {
  int front,rear;
  int data[MAX];
 } typedef lqueue;
void q_insert(lqueue *,int);
int q_delet(lqueue *);
void q_disply(lqueue);
void main()
{
 int choice,p,del_item;
 lqueue my_queue;
  clrscr();
 my_queue.front=-1;
 my_queue.rear=-1;
 while(1)
 {
   printf("enter the choice");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:printf("enter the element");
	   scanf("%d",&p);
	   q_insert(&my_queue,p);
	   break;
    case 2:del_item=q_delet(&my_queue);
	   printf("\n deleted item= %d",del_item);
	   break;
    case 3:exit();
   }
 }
// getch();
}
void q_insert(lqueue *qp,int elem)
{
 if(qp->rear==MAX-1)
 {
     printf("\n queue is full");
   return;
   }
    qp->rear=qp->rear+1;
 qp->data[qp->rear]=elem;
 if(qp->front==-1)
   qp->front=0;
   return;
}

int q_delet(lqueue *lq)
{
  int elem;
  if(lq->front==-1 && lq->rear==-1)
   {
     printf("\n queue is underflow");
     return -1;
   }
   else
   elem=lq->data[lq->front];
    if(lq->front==lq->rear)//queue has only one or top element
     {
       lq->front=-1;
       lq->rear=-1;
     }
     else
     lq->front=lq->front+1;
return elem;
}


