#include<stdio.h>

int main()
{
    int a[100],b[100];
    int x,i;

    printf("\n Enter Limit => ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number 1 => ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number 2 => ");
        scanf("%d",&b[i]);
    }
    printf("\nA =>");
    for(i=0;i<x;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nB =>");
    for(i=0;i<x;i++)
    {
        printf(" %d",b[i]);
    }
    printf("\nAddition =>");
    for(i=0;i<x;i++)
    {
        printf(" %d",a[i]+b[i]);
    }
    return 0;
}