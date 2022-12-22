#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    while(i<=x)
    {
        printf("\n Square Of %d => %d",i,i*i);
        i++;
    }
    return 0;
}