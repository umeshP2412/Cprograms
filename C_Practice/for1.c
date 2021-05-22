#include<stdio.h>
void main()
{
	int ch,i;
	printf("Give choice:");
	scanf("%d",&ch);
	for (i=0;i<=ch;i++)
	{
		printf("%d.Hello world\n",i+1);
	}
}
