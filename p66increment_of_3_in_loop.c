#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i=i+3)
    {
        printf("\n %d",i);
    }
    return 0;
}