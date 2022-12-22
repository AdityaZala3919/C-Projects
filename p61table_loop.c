#include<stdio.h>

int main()
{
    int i,x;
    
    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=10;i++)
    {
        printf("\n %d x %d = %d",x,i,i*x);
    }
}