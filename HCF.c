#include<stdio.h>
int main()
{
    int n1, n2,small,i;
    scanf("%d %d",&n1,&n2);
    small= (n2<n1)? n2: n1;
    for(i = small; i>=1;i--)
    {
        if(n1%small==0 && n2%small==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
