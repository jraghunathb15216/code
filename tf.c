#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int n;
void printer(int *p);
void bin(int a )
{
  int *p,i=0;
  p=(int *)malloc(n*sizeof(int));;
  while(a>0)
  {
    p[i]=a%2;
  i++;
  a=a/2;
}
printer(p);
free(p);
}
void printer(int *p)
{
  int i=0;
  for(i=0;i<n;i++)
  {
    if(p[i]==0)
    printf("false");
    else
    printf("true");
  }
  printf("\n\n");
}
int main()
{
  clock_t start;
  printf("enter the the value of the string size of the binary\n");
  scanf("%d",&n);
  start=time(NULL);
  for(int i=0;i<pow(2,n);i++)
  {
    bin(i);
  }
  double diff=(double)(time(NULL)-start);
  printf("%lf",diff);
}
