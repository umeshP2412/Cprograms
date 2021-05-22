#include<stdio.h>
void main()
{

    int a;
    printf("Give value for a:");
    scanf("%d",&a);

    switch(a)
    {
        case 1: printf("Its one");
                break;
        case 2: printf("Its two");
                break;
        case 3: printf("Its Three");
                break;
        default: printf("Invalid");
    }
}
