#include<stdio.h>

int main()
{
    int a[100],i,x,c=0,s=0;

    printf("\n Enter Limit => ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number => ");
        scanf("%d",&a[i]);
    }

    printf("\n Values ");
    for(i=0;i<x;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n %d Is Even",a[i]);
        }
        else
        {
            printf("\n %d Is Odd",a[i]);
        }
        c++;
        s=s+a[i];
    }
    printf("\n Count => %d",c);
    printf("\n Sum => %d",s);
    return 0;
}