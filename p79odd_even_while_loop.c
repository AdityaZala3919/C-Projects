#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    while (i<=x)
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
    }
    return 0;
}