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
  char ch[2];
  int i=0;
  scanf("%s",ch);
  printf("\nquery = %c\n",ch[0]);
  while((str[i++]!=ch[0])&&(i<strlen(str)+6));
  if(i<strlen(str)+3)
  printf("positon of the %d",i);
  else
  printf("not found\n");
  return 0;
}
