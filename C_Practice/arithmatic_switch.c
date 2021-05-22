#include<stdio.h>
void main()
{
	int a, b;
	char ch;
	printf("Give a: ");
	scanf("%d",&a);
	printf("Give b: ");
	scanf("%d",&b);
	printf("Give your choice: ");
	scanf(" %ca",&ch);
	
	switch(ch)
	{
		case '+' : printf("%d",a+b);
				   break;
		case '-' : printf("%d",a-b);
				   break;
		case '*' : printf("%d",a*b);
			       break;
		case '/' : printf("%f",(float)a/(float)b);
			       break;
		default: printf("Invalid input");	
	}
}
