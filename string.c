#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_terms 301
int main()
{
  int start,end;
  char str[max_terms];
  printf("enter the positions of incision and enter the string which is to be worked upon\n");
  scanf("%d%d%s",&start,&end,str);
  printf("\nentered string and the lengths are \n");
  printf("entered string s =%s\n and the length of the string is =%lu\n",str,strlen(str));
  int i=0,j=0;
  char str1[max_terms],str2[start-1];
  strcpy(str2,str);
  strcpy(str1,str2);
  strcpy(str1+start-1,str+end);
  printf("\nentered string is %s\n",str1);
  return 0;
}
