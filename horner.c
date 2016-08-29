#include<stdio.h>
#include<stdlib.h>
int degree;
float horner(int ,float ,float []  );
int main()
{
  printf("enter the  degree of the polynomial\n ");
  scanf("%d",&degree);
  float* p;
  p=(float *)malloc((degree+1)*sizeof(float));
  for (int i=0;i<degree+1;i++)
  {
    printf("\nenter the coefficeint in the increasing order of the index\n");
    scanf("%f",&p[i]);
  }
  for (int i=0;i<degree+1;i++)
  {
    printf("%f\n",p[i]);
  }
  float  x;
  printf("enter the  value of x for which we need the output\n\n");
  scanf("%f",&x);
  float val;
  val=horner(0,x,p);
  printf("\n the value of the function is =%f\n\n",val);
  return 0;
}
float horner(int n,float x  ,float p[] )
{
  if(degree>0)
  {
  if(n==degree-1)
  return p[n+1]*x+p[n];
  else
  return horner(n+1,x,p)*x+p[n];
}
else
return p[0];
}
