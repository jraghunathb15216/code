#include<stdio.h>
#include<stdlib.h>
typedef struct list *listpointer;
typedef struct list
{
  int i;
  listpointer next;
}lister;
void create(listpointer *pointer)
{
  lister *temp;
  temp=(lister *)malloc(1*sizeof(lister));
  temp->next=*pointer;
  *pointer =temp;
}
void printer(listpointer head)
{
  int i=0;
while(head!=NULL)
{
  printf("%d %d\n",i+1,head->i);
  i++;
  head=head->next;
}
void insertion()
}
int  main()
{
  listpointer head=NULL;
  printf("enter the size of the list you need to make\n");
  int size,i;
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    create(&head);
    head->i=i+1;
  }
  printf("entered list by you is\n");
  i=0;
  listpointer temp=head;
  while(head!=NULL)
  {
   printf("%d %d\n",i+1,head->i);
   i++;
   head=head->next;
  }
  printf("entered list printing using function printer\n");
  printer(temp);
return 0;
}
