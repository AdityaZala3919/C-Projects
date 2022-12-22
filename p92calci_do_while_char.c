#include<stdio.h>

int main()
{
    int a,b;
    char op;
    
    do
    {
        printf("\n Enter a For Addition");
        printf("\n Enter s For Substraction");
        printf("\n Enter m For Multiplication");
        printf("\n Enter d For Division");
        printf("\n Enter e For Exit");
        printf("\n Enter Number => ");
        fflush (stdin);
        scanf("%c",&op);

        if(op=='a' || op=='A')
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Addition => %d",a+b);
        }
        else if(op=='s' || op=='S')
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Substraction => %d",a-b);
        }
        else if(op=='m' || op=='M')
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Multiplication => %d",a*b);
        }
        else if(op=='d' || op=='D')
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Division => %d",a/b);
        }
        else if(op=='e' || op=='E')
        {
            printf("\n End Of Session");
        }
        else
        {
            printf("\n Error");
        }
    }while (op!=5);
    return 0;
}