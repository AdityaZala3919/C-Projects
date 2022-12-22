#include<stdio.h>

int main()
{
    int x,i,s=0,c=0;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("\n %d +",i+1);
        c++;
        s=s+i;
    }
    printf("\n Count => %d",c);
    printf("\n Sum => %d",s);
    return 0;
}