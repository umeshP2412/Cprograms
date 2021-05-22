#include<stdio.h>
void main()
{
	int i,j,k,l,c;
	printf("Give counter: ");
	scanf("%d",&c);
	
	for (i=0;i<=c;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=c;i>=1;i--)
	{
		for (j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
