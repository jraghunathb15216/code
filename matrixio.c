#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int row,col;
int **matrix;
int main(int argc,char *argv[])
{
  FILE *MAT;
  long long int array[256];
  int k=0;
  for(k=0;k<256;k++)
  {
  	array[k]=0;
  }
  MAT=fopen(argv[1],"r");
  if(MAT==NULL)
  {
  	fprintf(stderr,"file requested is not present\n");
  	return 0;

  }
  if(strcmp(argv[1],"1.txt"))
    {
    	row =198;
    	col=200;
    }
    else if(strcmp(argv[1],"2.txt"))
    {
    	row=1200,col=1920;
    }
    else if(strcmp(argv[1],"3.txt"))
    {
    	row=10967,col=10004;
    }
  	matrix=(int* *)malloc(row*sizeof(int *));
  	int i=0;
  	for(i=0;i<row;i++)
  	{
  		matrix[i]=(int *)malloc(col*sizeof(int ));
  	}                                                     // 2-d matrix formed
   for(i=0;i<row;i++)
   {
   	int j=0;
   	for(j=0;j<col;j++)                                  //matrix populating from parsing
   	{	
   		fscanf(MAT,"%d",&matrix[i][j]);
   	    array[matrix[i][j]]++;
   	    printf("read from the file=%d\n",matrix[i][j]);
   	}
   }
  }