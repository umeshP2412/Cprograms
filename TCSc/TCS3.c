#include<stdio.h>
int main()
{
    int i,a,n,b,j;
    printf("Give value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            /*if(i==1)
            {
                a=0;
            }
            else if(i==3)
            {
                a=2;
            }
            else
            {
                a=a*2;
            }*/
            a=i-1;
        }
        else
        {
            if(i==2)
            {
                 b=0;
            }
            else
            {
                b=b+1;
            }

        }
    }
if(n%2!=0)
{
        printf("\n%d th term of series is %d\t",n,a);
}
else
{
        printf("\n%d th term of series is %d\t",n,b);
}
}
