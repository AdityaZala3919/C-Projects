#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=1;
    do
    {
        printf("\n %d x %d = %d",x,i,i*x);
        i++;
    }while(i<=10);
    return 0;
}