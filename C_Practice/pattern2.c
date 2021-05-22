#include<stdio.h>
void main()
{
	int i,j,c;
	printf("Give counter: ");
	scanf("%d",&c);
	for (i=c;i>=1;i--)
	{
		for (j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
