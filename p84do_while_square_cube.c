#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    do
    {
        printf("\n Number => %d  Square => %d  Cube => %d",i,i*i,i*i*i);
        i++;
    }while(i<=x);
    return 0;
}