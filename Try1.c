#include<stdio.h>
void main()
{
    int c,a,b,d;
    printf("Give any character:");
    scanf("%c",&c);
    printf("The choosen is %c",c);
    printf("Give a and b:");
    scanf("%d %d",&a,&b);
    if(c == '+')
        printf("Addition is %d",d = a+b);
    else if(c == '-')
        printf("subtraction is %d",d = a-b);
    else if(c == '*')
        printf("Multiplication is %d",d = a*b);
    else
        printf("Invalid Character, Try again");
}
