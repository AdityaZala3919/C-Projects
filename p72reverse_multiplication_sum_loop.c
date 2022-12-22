#include<stdio.h>

int main()
{
    int x,i,f=1;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=x;i>=1;i--)
    {
        printf("%d x ",i);
        f=f*i;
    }
    printf("\n Factorial => %d",f);
    return 0;
}