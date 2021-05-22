#include<stdio.h>
int main()
{
    int list[10];
    int c,N,i,j,temp,m,n;
    scanf("%d",&N);
    for(c=0;c<N;c++)
    {
        scanf("%d",&list[c]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(list[j]<list[i])
            {
                temp=list[j];
                list[j]=list[i];
                list[i]=temp;

            }
            //printf("a[%d]-%d ",j,list[j]);
        }
        //printf("\n");

    }
    for(m=0;m<N;m++)
    {
        printf("%d\t",list[m]);
    }
    scanf("\n%d",&n);
    //int y= n-1;
    printf("%d",list[n-1]);
}
