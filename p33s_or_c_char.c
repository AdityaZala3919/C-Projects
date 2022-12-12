#include<stdio.h>

main()
{
    int x;
    char op;

    printf("\n Enter s for square");
    printf("\n Enter c for cube");
    printf("\n Enter Option => ");
    scanf("%c",&op);

    if (op=='s')
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);
        printf("\n Square => %d",x*x);
    }
    else if (op=='c')
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);
        printf("\n Cube => %d",x*x*x);
    }
    else
    {
        printf("\n Error");
    }
}