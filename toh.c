#include <stdio.h>
void DiscMove(int n,char source,char dest,char spare )      //recursive function for tower hanoi algorithm
{
	if(n==0)
		return;                                        
	DiscMove(n-1,source,spare,dest);
    printf(" Move disk %d from peg %c to peg %c\n",n,source,dest);
    DiscMove(n-1,spare,dest,source);
}
int main()
{
   printf("Number of disks  :\n");               //prompt user to input value
   int n;
   scanf("%d",&n);
   DiscMove(n,'S','D','A');                     //recursive call for tower hanoi algorithm starts
   return 0;
}
