#include<stdio.h>

int main()
{
    int x,i,s=0;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("%d + ",i*i);
            s=s+(i*i);
        }
        else
        {
            printf("%d + ",i*i*i);
            s=s+(i*i*i);
        }
    }
    printf("\n Sum => %d",s);
    return 0;
}