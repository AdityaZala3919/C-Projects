#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    i=1;
    do
    {
        printf("\n %d",i);
        i++;
    }while(i<=x);
    return 0;
}