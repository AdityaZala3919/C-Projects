#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\n Enter Number 1 => ");
    scanf("%d",&a);
    printf("\n Enter Number 2 => ");
    scanf("%d",&b);
    printf("\n Enter Number 3 => ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("\n A Is Maximum");
    }
    else if (b>a && b>c)
    {
        printf("\n B Is Maximum");
    }
    else if (c>a && c>b)
    {
        printf("\n C Is Maximum");
    }
    else
    {
        printf("\n Error");
    }
    return 0;
}