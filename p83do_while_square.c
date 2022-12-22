#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    do
    {
        printf("\n Square Of %d => %d",i,i*i);
        i++;
    }while(i<=x);
    return 0;
}