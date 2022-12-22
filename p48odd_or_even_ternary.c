#include<stdio.h>

int main()
{
    int x;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    x%2==0 ?printf("\n This Is Even Number") :printf("\n This Is Odd Number");

    return 0;
}