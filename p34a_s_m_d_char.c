#include<stdio.h>

main()
{
    int x,y;
    char op;

    printf("\n Enter a for addition");
    printf("\n Enter s for subtraction");
    printf("\n Enter m for multiplication");
    printf("\n Enter d for division");
    printf("\n Enter Option => ");
    scanf("%c",&op);

    if (op=='a')
    {
        printf("\n Enter Number 1 => ");
        scanf("%d",&x);
        printf("\n Enter Number 2 => ");
        scanf("%d",&y);
        printf("\n Addition => %d",x+y);
    }
    else if (op=='s')
    {
        printf("\n Enter Number 1 => ");
        scanf("%d",&x);
        printf("\n Enter Number 2 => ");
        scanf("%d",&y);
        printf("\n Subtraction => %d",x-y);
    }
    else if (op=='m')
    {
        printf("\n Enter Number 1 => ");
        scanf("%d",&x);
        printf("\n Enter Number 2 => ");
        scanf("%d",&y);
        printf("\n Multiplication => %d",x*y);
    }
    else if (op=='d')
    {
        printf("\n Enter Number 1 => ");
        scanf("%d",&x);
        printf("\n Enter Number 2 => ");
        scanf("%d",&y);
        printf("\n Division => %d",x/y);
    }
    else
    {
        printf("\n Error");
    }
}