#include<stdio.h>
int main()
{
    int i,n,j;
    char a[20];
   // printf("Give string:");
    //scanf("%s",&a);
   // printf("%s",a);
    printf("Give n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
               // printf("%s ",a);
        }
        printf("\n");
    }
}
