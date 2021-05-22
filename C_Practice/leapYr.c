#include<stdio.h>
void main()
{
	int y;
	printf("Give value of a year: ");
	scanf("%d",&y);
	if (y%4 == 0)
	{
		printf("This is a leap year");
	}
	else
	{
		printf("This is not a leap year");
	}
}
