#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("\n %d Square => %d Cube => %d",i,i*i,i*i*i);
    }
    return 0;
}