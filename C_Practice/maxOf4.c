#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Give value of a: ");
	scanf("%d",&a);
	printf("Give value of b: ");
	scanf("%d",&b);
	printf("Give value of c: ");
	scanf("%d",&c);
	printf("Give value of d: ");
	scanf("%d",&d);
	
	if (a>b)
	{
		if (a>c)
		{
			if (a>d)
			{
				printf("a is max: %d", a);
			}
			else
			{
				printf("d is max: %d", d);
			}
		}
		else
		{
			if (c>d)
			{
				printf("c is max: %d", c);
			}
			else
			{
				printf("d is max: %d", d);
			}
		}
	}
	else
	{
		if (b>c)
		{
			if (b>d)
			{
				printf("b is max: %d", b);
			}
			else
			{
				printf("d is max: %d", d);
			}
		}
		else
		{
			if (c>d)
			{
				printf("c is max: %d", c);
			}
			else
			{
				printf("d is max: %d", d);
			}
		}
	}
}

