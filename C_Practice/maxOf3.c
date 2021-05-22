#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Give value of a: ");
	scanf("%d",&a);
	printf("Give value of b: ");
	scanf("%d",&b);
	printf("Give value of c: ");
	scanf("%d",&c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf("a is max: %d", a);
		}
		else
		{
			printf("c is max: %d", c);
		}
	}
	else
	{
		if (b>c)
		{
			printf("b is max: %d", b);
		}
		else
		{
			printf("c is max: %d", c);
		}
	}
	
}
