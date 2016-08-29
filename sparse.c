#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct {
  int row;
  int col;
  int value;
} terms;
int i;
int rows,cols,nterms;
void read(terms * a,int rows,int cols,int nterms)
{
  int trow,tcol,tvalue;
  a[0].row=rows;
  a[0].col=cols;
  a[0].value=nterms;
for(int i=1;i<nterms+1;i++)
{
  printf("enter the %d th non zero entry in the sparse matrix \nafter entering its row and col information\n",i);
  scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].value);
}
}
void printer(terms* a,int nterms)
{
for(int i=1;i<=nterms;i++)
printf("%d\t\t%d\t\t%d\t\n",a[i].row,a[i].col,a[i].value );
printf("\n");
}
void transpose(terms a[] , terms b[])
{
  time_t start=time(NULL);
int n,i,j;
n=a[0].value;
b[0].row=a[0].col;
b[0].col=a[0].row;
b[0].value=n;
if(n>0)//non zero matrix
{
  int currentb=1;
  for(i=0;i<b[0].row;i++)
  {
    for(j=1;j<n;j++)
    {
      if(a[j].col==1)
      {
        b[currentb].row=a[j].col;
        b[currentb].col=a[j].row;
        b[currentb].value=a[j].value;
        currentb++;
      }
    }
  }
}
printf("%ld",time(NULL)-start);
}
void fastranspose(terms a[],terms b[])
{
int *start;
int numcols;
int numterms;
start=(int *)malloc(a[0].col*sizeof(int));
b[0].row=numcols=a[0].col;
b[0].col=a[0].row;
b[0].value=numterms=a[0].value;
if(numterms>0)
{
  for(i=0;i<numcols;i++)
  start[i]=0;
  for(i=1;i<numterms;i++)
  start[a[i].col]++;
int startprev=1;
  for(i=1;i<numcols;i++)
  {
    int temp ;
    temp=start[i];
    start[i]=startprev+start[i-1];
    startprev=temp;
  }
}
}
int main()
{
  printf("enter the rows and cols of sparse matrix and the number of nin zero entries\n");
  scanf("%d%d%d",&rows,&cols,&nterms);
  terms *a;
  printf("counter reached here\n");
  a=(terms *)malloc((nterms+1)*sizeof(terms));
  read(a,rows,cols,nterms);
  printer(a,nterms);
  printf("\n\t\tmatrix format\n");
  terms *b;
  b=(terms *)malloc(nterms*sizeof(terms));
  transpose(a,b);
  printf("transposed sparse matrix\n");
  printer(b,nterms);
  printf("\nfasttransposed matrix\n");
  fastranspose(a,b);
  printer(b,nterms);
}
