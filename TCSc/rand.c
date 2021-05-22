#include<stdio.h>
int i=4;
int rand(int);
int main()
{
    int const a=5;
     printf("%d\n",a);
     printf("%d\n",i);
     rand(1);
    return 0;

}
int rand(int o)
{
    int i=3;
    if(o==1)
        printf("%d",i);
}
