
#include<stdio.h>
int main()
{
    int i,n,k,j;

    printf("Give n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k-- )
        {
            printf("c  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
}
