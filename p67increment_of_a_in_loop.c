#include<stdio.h>

int main()
{
    int x,i,a;

    printf("\n Enter Limit => ");
    scanf("%d",&x);
    printf("\n Enter Number => ");
    scanf("%d",&a);

    for(i=1;i<=x;i=i+a)
    {
        printf("\n %d",i);
    }
    return 0;
}