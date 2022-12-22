#include<stdio.h>

int main()
{
    int x,i,c=0,s=0;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=30;i++)
    {
        if(i%7==0)
        {
            printf("\n %d Is Divisible By 7",i);
            c++;
            s=s+i;           
        }
    }
    printf("\n Count => %d Sum => %d",c,s);
    return 0;
}