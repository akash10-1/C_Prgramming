#include<stdio.h>
int main ()
{
	int n,fact=1,i;
	printf("enter the number to find factorial");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial of %d is %d",fact,n);
	return 0;
}
