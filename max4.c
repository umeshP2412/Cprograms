#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Give value of a, b, c, d\n");
    scanf(" %d %d %d %d",&a,&b,&c,&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a=%d is maximum",a);
            }
            else
            {
                printf("d=%d is maximum",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("c=%d is maximum",c);
            }
            else
            {
                printf("d=%d is maximum",d);
            }

        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b=%d is maximum",b);
            }
            else
            {
                printf("d=%d id maximum",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("c=%d is maximum",c);
            }
            else
            {
                printf("d=%d is maximum",d);
            }
        }
    }
}
