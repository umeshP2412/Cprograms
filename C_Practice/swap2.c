#include<stdio.h>
void main()
{
	int a,b;
	printf("Give value of a: ");
	scanf("%d",&a);
	printf("Give value of b: ");
	scanf("%d",&b);
	printf("Value of a= %d \n",a);
	printf("Value of b= %d \n",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("Value of a= %d \n",a);
	printf("Value of b= %d \n",b);
}
