#include<stdio.h>

int main()
{
    int x;
    char adi;

    adi:
    printf("\n Enter Any Positive Number => ");
    scanf("%d",&x);

    if (x>0)
    {
        printf("\n Square => %d",x*x);
    }
    else
    {
        printf("\n Enter Any Positive Number"); 
        goto adi;
    }
    return 0;
}