#include<stdio.h>
void main()
{
	int c, facto=1, i;
	printf("Give factorial int: ");
	scanf("%d",&c);
	for (i=1;i<=c;i++)
	{
		facto = facto*i;
	}
	printf("%d",facto);
}
