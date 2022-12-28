#include<stdio.h>

int main()
{
    int a[100];
    int x,i,c=0,y;

    printf("\n Enter Limit => ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("\n Enter Number => ");
        scanf("%d",&a[i]);
    }

    printf("\n Enter Desired Number => ");
    scanf("%d",&y);
    
    for(i=0;i<x;i++)
    {
        if(a[i]==y)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("\n Error, Not Found !");
    }
    else
    {
         printf("\n Count => %d",c);
    }
    return 0;
}