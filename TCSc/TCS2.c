#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[10],c[10],m[20];
    int i,j;
    int x,y,z;

    gets(a);
    gets(b);
    gets(c);

    x= strlen(a);
    y= strlen(b);

    for(i=0;i<x;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            a[i] ='%';
        }
    }
    for(j=0;j<y;j++)
    {
        if(b[j]=='b'||b[j]=='c'||b[j]=='d'||b[j]=='f'||b[j]=='g'||b[j]=='h'||b[j]=='j'||b[j]=='k'||b[j]=='l'||b[j]=='m'||b[j]=='n'||b[j]=='p'||b[j]=='q'||b[j]=='r'||b[j]=='s'||b[j]=='t'||b[j]=='v'||b[j]=='w'||b[j]=='x'||b[j]=='y'||b[j]=='z')
        {
            b[j]='#';
        }
    }
    z=0;
    while(c[z] != '\0')
    {
        if(c[z]>= 'a' && c[z]<='z')
        {
            c[z]= c[z]-32;
        }
        z++;
    }
    printf("%s %s %s",&a,&b,&c);
    strcat(a,b);
    strcat(a,c);
    printf("new string is %s",a);
}
