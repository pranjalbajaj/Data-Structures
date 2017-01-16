#include<stdio.h>
#include<conio.h>
#define MAX 4
struct cqueue
{
 int front,rear;
 int data[MAX];
}typedef cqueue;
void cq_insert(cqueue *,int);
int cq_delet(cqueue *);
void cq_display(cqueue);
void main()
{
  int choice,p,del_elem;
  cqueue my_cqueue;
  clrscr();
  my_cqueue.front=-1;
  my_cqueue.rear=-1;
  while(1)
  {
    printf("enter the chioce");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:printf("enter the element");
	    scanf("%d",&p);
	    cq_insert(&my_cqueue,p);
	    break;
     case 2:del_elem= cq_delet(&my_cqueue);
	    printf("deleted elem =%d",del_elem);
	    break;
     case 3:cq_display(my_cqueue);
	    break;
     case 4:exit();
	    break;
     }
   }
 }
void cq_insert(cqueue *qp,int elem)
{
 if( (qp->rear==MAX-1 && qp->front==0) || (qp->rear+1==qp->front) )
 {
  printf("queue is full");
  return;
  }
  qp->rear=(qp->rear+1)%MAX;
  qp->data[qp->rear]=elem;
  if(qp->front==-1)
    qp->front=0;
  return;
}
int cq_delet(cqueue *qp)
{
  int elem;
  if(qp->rear==-1 )
  {
   printf("queue is empty");
   return -1;
   }
   else
  {
   elem=qp->data[qp->front];
   if(qp->front==qp->rear)
   {
   qp->front=-1;
   qp->rear=-1;
   }
    else
   {
    qp->front=(qp->front+1)%MAX;
   }
    return elem;
 }
}

void cq_display(cqueue qp)
{
int i;
if(qp.front==-1 )
{
  printf("\nqueue is empty");
  return;
  }
   printf("the queue is as follow ");

   for(i=qp.front; i!=qp.rear; i=(i+1)%MAX)
   {
     printf(" %d ",qp.data[i]);
   }
   printf(" %d ",qp.data[i]);
}

