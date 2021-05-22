#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Give value to a:");
    scanf("%d",&a);
    printf("\nGive value to b:");
    scanf("%d",&b);
    printf("\nGive value to c:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
            printf("a=%d is maximum",a);
        else
            printf("c=%d is maximum",c);
    }
    else
    {
        if(b>c)
            printf("b=%d is maximum",b);
        else
            printf("c=%d is maximum",c);
    }
}
