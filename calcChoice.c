#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("give value of a:");
    scanf("%d",&a);
    printf("give value of b:");
    scanf("%d",&b);

    printf("Select anyone below:\n Addition=1\n subtraction=2\n Multiplication=3\n Modulo=4");
    printf("\nGive your choice:");
    scanf("%d",&ch);

    if(ch==1)
        printf("Addition is: %d",c=a+b);
    else if(ch==2)
        printf("Subtraction is: %d",c=a-b);
    else if(ch==3)
        printf("Multiplication is: %d",c=a*b);
    else
        printf("Invalid Choice");
}
