#include<stdio.h>
void main()
{
	int a,b,c;
	printf("give value of a: ");
	scanf("%d",&a);
	printf("Give value of b: ");
	scanf("%d",&b);
	printf("Value of a=%d \n",a);
	printf("Value of b=%d \n",b);
	c=a;
	a=b;
	b=c;
	printf("Value of a=%d \n",a);
	printf("Value of b=%d \n",b);
	
}

