#include<stdio.h>
void main()
{
	int ch;
	printf("Give day in integer: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Monday");
				break;
		case 2: printf("Tuesday");
				break;
		case 3: printf("Wednesday");
			break;c 
		case 4: printf("Thursday");
				break;
		case 5: printf("Friday");
				break;
		case 6: printf("Saturday");
				break;
		case 7: printf("Sunday");
				break;
		default: printf("Invalid input...");
	}
}
