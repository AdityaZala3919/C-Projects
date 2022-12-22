#include<stdio.h>

int main()
{
    int x,i,f=1;
    
    printf("\n Enter Number => ");
    scanf("%d",&x);
    i=x;
    do
    {
        printf("%d x ",i);
        f=f*i;
        i--;
    }while(i>=1);
    printf("\n Factorial => %d",f);
    return 0;
}