#include<stdio.h>
void main()
{
    char c;
    printf("Enter any character:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Given character is vowel");
    else
        printf("Given is not vowel");
}
