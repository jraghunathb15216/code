#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long long int fibonacci(int );
int main()
{
  int n;
  printf("enter the number of fibonacci to be generated\n");
  scanf("%d",&n);
  int k;
long long   int fib1=0,fib2=1,temp;
  time_t algos=time(NULL);
  for(k=0;k<=n;k++)
  {
    if(k==0)
    printf("\n%lld\n",fib1);
    else if(k==1)
    printf("\n%lld\n",fib2);
    else
    {
    temp=fib1+fib2;
    printf("\n%lld\n",temp);
    fib1=fib2;
    fib2=temp;
    }
  time_t  algop=time(NULL);
printf("\ntime taken by iterative algorithm is =%lf\n",difftime(algop,algos));
  }
  for(k=0;k<=n;k++)
{
  time_t start=time(NULL);
  long long int t=fibonacci(k);
  time_t end=time(NULL);
  printf("required fibonacci number is = %lld  and the time required ti compute it= %lf\n",t,(double)difftime(end,start));
}
  return 0;
}
long long int fibonacci(int n)
{
  if(n==0)
  return 0;
  else if(n==1)
  return 1;
  else
  return fibonacci(n-1)+fibonacci(n-2);
}
