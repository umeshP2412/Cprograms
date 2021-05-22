#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("Give value of a:");
	scanf("%d",&a);
	printf("Give value of b:");
	scanf("%d",&b);
	printf("\n\nEnter the Character: ");
    scanf(" %c", &ch);
    printf("\nEntered integer is: %c", ch);
	if (ch == '+')
	{
		printf("%d",a+b);
	}
	else if (ch == '-')
	{
		printf("%d",a-b);
	}
	else if (ch == '*')
	{
		printf("%d",a*b);
	}
	else if (ch == '/')
	{
		printf("%f",(float)a/(float)b);
	}
	else
	{
		printf("Invalid Input :(");
	}
}
