#include<stdio.h>
void main()
{
    int j,i,n;
    printf("Give value to n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("*");
        }
        printf("\n");

    }
}
