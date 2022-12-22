#include<stdio.h>

int main()
{
    int x;
    char op;

    do
    { 
    printf("\n Enter s For Square");
    printf("\n Enter c For Cube");
    printf("\n Enter e For Exit");
    printf("\n Enter Number => ");
    fflush(stdin);
    scanf("%c",&op);

    if(op=='s' || op=='S')
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);

        printf("\n Square => %d",x*x);
    }
    else if(op=='c' || op=='C')
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);

        printf("\n Cube => %d",x*x*x);
    }
    else if(op=='e' || op=='E')
    {
        printf("\n End Of Session ");
    }
    else
    {
        printf("\n Error");
    }
    }while (op!=3); 
    return 0;
}