#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    while(i<=10)
    {
        printf("\n %d x %d = %d",x,i,i*x);
        i++;
    }
    return 0;
}