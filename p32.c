#include<stdio.h>

main()
{
    int x;
    char op;
    float h,b,r;

    printf("\n Enter a For Area Of Triangle => ");
    printf("\n Enter c For Area Of Circle => ");
    printf("\n Enter o For Odd Or Even Number => ");
    printf("\n Enter Number => ");
    scanf("%c",&op);

    if (op=='a')
    {
        printf("\n Enter Height => ");
        scanf("%f",&h);
        printf("\n Enter Base => ");
        scanf("%f",&b);
        printf("\n Area Of Triangle => %.2f",0.5*h*b);
    }
    else if (op=='c')
    {
        printf("\n Enter Radius => ");
        scanf("%f",&r);
        printf("\n Area Of Circle => %.2f ", 3.14*r*r);
    }
    else if (op=='o')
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);
        
        if (x%2==0)
        {
            printf("\n Number Is Even");
        }
        else
        {
            printf("\n Number Is Odd");
        }
    }
    else
    {
        printf("\n Error");
    }
}