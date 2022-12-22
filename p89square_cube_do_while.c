#include<stdio.h>

int main()
{
    int op,x;

    do
    { 
    printf("\n Enter 1 For Square");
    printf("\n Enter 2 For Cube");
    printf("\n Enter 2 For Exit");
    printf("\n Enter Number => ");

    scanf("%d",&op);

    if(op==1)
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);

        printf("\n Square => %d",x*x);
    }
    else if(op==2)
    {
        printf("\n Enter Number => ");
        scanf("%d",&x);

        printf("\n Cube => %d",x*x*x);
    }
    else if(op==3)
    {
        printf("\nBye");
    }
    else
    {
        printf("\n Error");
    }
    }while (op!=3); 
    return 0;
}