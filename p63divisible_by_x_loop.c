#include<stdio.h>

int main()
{
    int a,i,x;

    printf("\n Enter Number => ");
    scanf("%d",&a);

    printf("\n Enter Divisor => ");
    scanf("%d",&x);

    for(i=1;i<=a;i++)
    {
        if(i%x==0)
        {
            printf("\n %d Is Divisible By %d",i,x);
        }
    }
    return 0;
}