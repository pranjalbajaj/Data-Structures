#include<stdio.h>
#include<conio.h>
#define MAX 5
struct dqueue
{
  int front,rear;
  int data[MAX];
}typedef dqueue;
void dqinsert_rear(dqueue *,int);
int dqdelet_front(dqueue *);
void dqinsert_front(dqueue *,int);
int dqdelet_rear(dqueue *);
int main()
{
  int p,choice1,choice,del_elem;
  dqueue my_queue;
 // clrscr();
  my_queue.front=-1;
  my_queue.rear=-1;
  while(1)
  {
    printf("enter the  choice \n for input restricted 1 and for output restricted 2");
    scanf("%d",&choice);
     switch(choice)
      {
	case 1:printf("for inserting an element from rear 1 \n for deleting an element fron front 2 \n for deleting an element from rear 3");
	       scanf("%d",&choice1);
	       switch(choice1)
		{
		  case 1:printf("enter the element");
			 scanf("%d",&p);
			 dqinsert_rear(&my_queue,p);
			 break;
		   case 2:del_elem=dqdelet_front(&my_queue);
			 printf("the deleted element=%d",del_elem);
			   break;
		    case 3:del_elem=dqdelet_rear(&my_queue);
			  printf("the deleted element=%d",del_elem);
			 break;
	   //  case 4:exit();
	     //	    break;
	       } //end of swicth
	    break;

	case 2:printf("for inserting an element fron rear 1 \n for deleting from front 2 \n for inserting an elem from front 3");
	       scanf("%d",&choice1);
	       switch(choice1)
		{
	     case 1:printf("enter the element");
		    scanf("%d",&p);
		    dqinsert_rear(&my_queue,p);
		    break;
	     case 2:del_elem=dqdelet_front(&my_queue);
		    printf("the deleted ele=%d",del_elem);
		    break;
	     case 3:printf("enter the elem");
		    scanf("%d",&p);
		    dqinsert_front(&my_queue,p);
		    break;
	    // case 4:exit();
	      //	    break;

	    } //end of switch
	    break;

	//case 3:exit();
	      // break;
     } //end of swich1
  }//end of while
} //end of main
void dqinsert_rear(dqueue *qp,int elem)
{
  if(qp->rear==MAX-1)
  {
    printf("the queue is full");
    return;
    }
    qp->rear=qp->rear+1;
    qp->data[qp->rear]=elem;
    if(qp->front==-1)
     qp->front=0;
   return;
}
void dqinsert_front(dqueue *qp,int elem)
{
  if(qp->front==0)
  {
   printf("the queue is full");
   return;
   }
   qp->front=qp->front-1;
   qp->data[qp->front]=elem;
   return;
 }
int dqdelet_front(dqueue *qp)
{
int elem;
if(qp->rear==-1 && qp->front==-1)
{
 printf("queue is empty");
 return -1;
 }
 else
 elem=qp->data[qp->front];
 if(qp->rear==qp->front)
 {
  qp->front=-1;
  qp->rear=-1;
  }
  else
  qp->front=qp->front+1;
  return elem;
}
int dqdelet_rear(dqueue *qp)
{
 int elem;
 if(qp->rear==-1 && qp->front==-1)
 {
  printf("queue is empty");
  return -1;
  }
  else
  elem=qp->data[qp->rear];
  if(qp->rear==qp->front)
  {
  qp->rear=-1;
  qp->front=-1;
  }
  else
  qp->rear=qp->rear-1;
  return elem;
}







