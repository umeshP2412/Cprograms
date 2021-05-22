//check user added value is odd or even
#include<stdio.h>
void main(){
	int a;
	printf("Give value of a: ");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("Given number is even");
	}
	else
	{
		printf("Given number is odd");
	}
}

