#include<stdio.h>

int main()
{
    int a[100];
    int x,i,c=0,s=0;

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
        if(a[i]>0)
        {
            printf("\n %d Is Positive",a[i]);
        }
        else if(a[i]==0)
        {
            printf("\n %d Is Positive",a[i]);
        }
        else
        {
            printf("\n %d Is Negative",a[i]);
        }
        c++;
        s=s+i;
        s=s-i;
    }
    printf("\n Count => %d",c);
    printf("\n Sum => %d",s);
    return 0;
}