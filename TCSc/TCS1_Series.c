//1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2184...
//Mixture of two Series print it if asked n=9 then print 16
#include<stdio.h>
int main()
{
    int n, i, a, b;
    printf("Give Number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            if(i==1)
                a=1;
            else
                a = a*2;
        }
        else
        {
            if(i==2)
                b=1;
            else
                b = b*3;
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
