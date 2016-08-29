#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *str;
  int size;
  printf("enter the size of the string and the string itself\n");
  scanf("%d",&size);
  str=(char *)malloc(size*sizeof(char));
  scanf("%s",str);
  printf("enter the char to be deleted\n");
  char ch;
  fflush(stdin);
  ch=getchar(stdin);
  int i=0;
  printf("\nquery = %c\n",ch);
  while(str[i]!=ch)
  i++;
  int start,end;
  start=i;
  end=i+1;
  if(i<=strlen(str))
  {
  char *temp;
  temp=(char *)malloc((strlen(str)-end)*sizeof(char));
  strcpy(temp,str+end);
  strcpy(str+start,temp);
  }
  printf("\nentered string is %s\n",str);
  return 0;
}
