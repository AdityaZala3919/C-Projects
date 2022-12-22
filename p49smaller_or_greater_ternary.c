#include<stdio.h>

int main()
{
    int a,b;

    printf("\n Enter Number 1 => ");
    scanf("%d",&a);
    printf("\n Enter Number 2 => ");
    scanf("%d",&b);

   a==b ?printf("\n Number 1 Is Equal To Number 2") : a>b ?printf("\n Number 1 Is Greater Than Number 2") :printf("\n Number 1 Is Smaller Than Number 2");

   return 0;
}