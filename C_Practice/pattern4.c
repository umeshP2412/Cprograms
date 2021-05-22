#include<stdio.h>
void main()
{
	int i,j,k,c;
	printf("Give counter: ");
	scanf("%d",&c);
	
	for (i=1;i<=c;i++)
	{
		for (j=c-1;j>=i;j--)
		{
			printf("%d",j);
			/*printf(" ");*/
		}
		for (k=0;k<=i;k++)
		{
			printf("%d",k);
			/*printf("*");*/
		}
		printf("\n");
		
	}
}
