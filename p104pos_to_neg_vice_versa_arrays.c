#include<stdio.h>

int main()
{
    int a[100];
    int x,i;

    printf("\n Enter Limit => ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number => ");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<x;i++)
    {   
        printf("%d ",a[i]*-1);   
    }
    return 0;
}