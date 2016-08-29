#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=a;
}
int partition (int *arr, int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}
 
/* A[] --> Array to be sorted, 
  l  --> Starting index, 
  h  --> Ending index */
void quickSort(int *A, int l, int h)
{
    if (l < h)
    {        
        /* Partitioning index */
        int p = partition(A, l, h); 
        quickSort(A, l, p - 1);  
        quickSort(A, p + 1, h);
    }
}
int main()
{
    printf("enter the size  of the dataset and data to be sorted\n");
    int n;
    scanf("%d",&n);
    int *array;
    array=(int *)malloc(n*sizeof(int));
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    quickSort(array,0,n);
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
}