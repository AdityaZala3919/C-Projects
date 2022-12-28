#include<stdio.h>

int main()
{
    int a[100];
    int i,n;

    printf("\n Enter Limit => ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter Number  => ");
        scanf("%d",&a[i]);
    }

    printf("\n Values");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}