#include<stdio.h>
int main()
{
    int a[10];
    int i,n,j,flag=0;
    printf("give number:");
    scanf("%d",&n);
    printf("Give values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d",a[i]);
        }
        flag=0;
    }
    return 0;
}
