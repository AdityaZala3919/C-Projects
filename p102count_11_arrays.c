#include<stdio.h>

int main()
{
    int a[100];
    int x,i,c=0;

    printf("\n Enter Limit => ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number => ");
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<x;i++)
    {
        if(a[i]==11)
        {
            c++;
        }    
    }
    printf("\n Count => %d",c);
    return 0;
}