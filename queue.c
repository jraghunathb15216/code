/*circular queue implementation*/
//J.Raghunath
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
  int var;
}element;
element *newqueue;
int front=0,rear=0,capacity;
void copy(element *a,element *b,element *c)
{
  while(a<=b)
  {
   *c=*a;
   a++;
   c++;
  }
}
void doublecapacity(element *queue)
{
  newqueue=(element *)malloc(2*capacity*sizeof(element));
  int start=(front+1)%capacity;
  if(start<2)
  copy(queue+start,queue+start+capacity-1,newqueue);
  else
  {
    copy(queue+start,queue+capacity-1,newqueue);
    copy(queue,queue+rear+1,newqueue+capacity-1);
  }

  front=2*capacity-1;
  rear=capacity-2;
  capacity*=2;
  free(queue);
  queue=newqueue;
printf("executed\n");
}
element queuempty()
{
  printf("warning queue is empty operation requested cannot be completed\n");
  element empty;
  empty.var=-100000;//this condition depends upon the data to be handled by the suite program;
  return empty;
}
#define create(queue,capacity)\
{\
  queue=(element *)malloc(capacity*sizeof(element));\
}
void addqueue(element *queue,int query)
{
  rear=(rear+1)%capacity;
  if(front==rear)
  doublecapacity(queue);
  printf("\n add queue function and assiging value\n");
  queue[rear].var=query;
  printf("control in here\n");
}
element deletequeue(element *queue)
{
  if(front==rear)
  return queuempty();
  front=(front+1)%capacity;
  return queue[front];
}
void display(element *a)
{
  int i=1;
  printf("current element in the list \n");
  if(capacity<2)
  printf("\nlist is empty\n");
  else
  {
  while(i<capacity)
  {
    printf("%d th element = %d\n",i,a[i].var);
    i++;
  }
}
}
int main()
{
  printf("enter the capacity of the queue\n");
  scanf("%d",&capacity);
  element *queue;
  create(queue,capacity);
  printf("enter the your query\n");
  int query;
  scanf("%d",&query);
  addqueue(queue,query);
  display(queue);
  addqueue(queue,1);
  display(queue);
  addqueue(queue,2);
  display(queue);
  addqueue(queue,query+3);
  display(queue);
  addqueue(queue,query+4);
  display(queue);
  addqueue(queue,query+4);
  display(queue);
  addqueue(queue,query+4);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  addqueue(queue,query);
  display(queue);
  deletequeue(queue);
  display(queue);
  deletequeue(queue);
  deletequeue(queue);
}
