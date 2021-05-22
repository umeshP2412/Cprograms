#include<stdio.h>
void main()
{
	int ch, i;
	printf("Give counter: ");
	scanf("%d",&ch);
	for (i=ch;i>=0;i--)
	{
		printf("%d\n",i);
	}
}
