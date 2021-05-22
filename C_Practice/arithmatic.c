#include<stdio.h>
void main()
{
	int a,b,c,d,e,g;
	float div;
	printf("Give value for a: ");
	scanf("%d",&a);
	printf("Give value for b: ");
	scanf("%d",&b);
	c= a+b;
	d= a-b;
	e= a*b;
	div= (float)a/(float)b;
	g= a%b;
	printf("Addition of %d and %d is %d \n",a,b,c);
	printf("subtraction is %d \n",d);
	printf("Multiplication is %d \n",e);
	printf("Divid is %.2f \n",div);
	printf("modulo is %d \n",g);
}
