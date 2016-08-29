#include<stdio.h>
int add(int,int);
int main()
{
	printf("enter the two number \n");
	int a,b;
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("\n the result of the computation is = %d",add(a,b));
    return 0;
}