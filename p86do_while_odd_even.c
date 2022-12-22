#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    do
    {
        if(i%2==0)
        {
            printf("\n %d Is Even",i);
        }
        else
        {
            printf("\n %d Is Odd",i);
        }
        i++;
    }while (i<=x);
    return 0;
}