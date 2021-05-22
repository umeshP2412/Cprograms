#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int rem, rev=0;
    while(number!=0)
    {
        rem= number%10;
        rev= (rev*10) +rem;
        number = number/10;
    }
    printf("%d",rev);
    return 0;
    }
