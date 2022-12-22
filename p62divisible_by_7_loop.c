#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if (i%7==0)
        {
            printf("\n %d Is Divisible By 7",i);
        }
        else
        {
            printf("\n %d Is Not Divisible By 7",i);
        }
    }
    return 0;
}