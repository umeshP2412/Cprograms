#include<stdio.h>
void main()
{
    int a;
    printf("Give value to a:");
    scanf("%d", &a);
    if(a%2==0)
        printf("It's even");
    else
        printf("Its Odd");
}
