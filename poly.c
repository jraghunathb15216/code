#include<stdio.h>
#include<stdlib.h>
typedef struct
{
  int degree;
  int capacity;
  float* coef;
}dpolynomial;
#define readpoly(int n , dpolynomial f)\
  printf("enter the  degree of the polynomial\n")\
  scanf("%d",&f.degree);\
  printf("statement seen");\
  f.coef=(float *)malloc(n*sizeof(float));\
  int j=0;\
  printf("\nenter the polynomial coeffeicients in decreasing order of coefffeiceint again sorry for the inconveince\n");\
  for(j=0;j<n;j++)\
  scanf("%f",&f.coef[j]);\
}\
void printpoly(dpolynomial* s)
{
  printf("\n\tTHE POLYNOMIAL ASKED TO BE RETREIVED FOR IS\n");
  for(int i=0;i<(*s).capacity;i++)
  printf("%fx(%d-%d)+",(*s).coef[i],(*s).degree,i);
  printf("0\n");
}
int main()
{

dpolynomial a;
printf("enter the number of polynomial coefficients that needs to be entered \n");
scanf("%d",&a.capacity);
printf("\nnumber of coefffeiceint= %d \n",n);
readpoly(n,a);
printpoly(&a);
}
