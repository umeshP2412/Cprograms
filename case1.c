#include<stdio.h>
void main()
{
    int a,b,s,m,ad;
    float d;
    char c;

    printf("Give value for a and b:");
    scanf("%d %d",&a,&b);

    printf(" For Addition '+'\n For Multiplication '*'\n For Subtraction '-'\n For Division '/'");
    printf("\nGive your choice:");
    scanf(" %c",&c);

    switch(c)
    {

        case'+' :
                    printf("Addition is %d",ad=a+b);
                    break;
        case'-' :
                    printf("Subtraction is %d",s=a-b);
                    break;
        case'*' :
                    printf("Multiplication is %d",m=a*b);
                    break;
        case'/' :
                    printf("division is %f",d=a/b);
                    break;
        default :
                    printf("Invalid character ");

    }
}
