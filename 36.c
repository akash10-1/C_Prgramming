#include<stdio.h>
int main ()
{
	int row,j,i;
	printf("enter the number of rows");
	scanf("%d", &row);
	for (i=1;i<=row;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
