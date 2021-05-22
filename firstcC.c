#include<stdio.h>
void main()
{
    int a,b,c,d,v;
    printf("Give value of a:");
    scanf("%d",&a);

    v=a/10;
    d=a%10;
    printf("\ndigit-1:%d",v);
    printf("\ndigit-1:%d",v);
    c=(d*10)+v;
    printf("\nInterchanged:%d",c);

}
