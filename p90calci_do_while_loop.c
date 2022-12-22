#include<stdio.h>

int main()
{
    int op,a,b;
    
    do
    {
    printf("\n Enter 1 For Addition");
    printf("\n Enter 2 For Substraction");
    printf("\n Enter 3 For Multiplication");
    printf("\n Enter 4 For Division");
    printf("\n Enter 5 For Exit");
    printf("\n Enter Number => ");
    scanf("%d",&op);

        if(op==1)
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Addition => %d",a+b);
        }
        else if(op==2)
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Substraction => %d",a-b);
        }
        else if(op==3)
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Multiplication => %d",a*b);
        }
        else if(op==4)
        {
            printf("\n Enter Number 1 => ");
            scanf("%d",&a);
            printf("\n Enter Number 2 => ");
            scanf("%d",&b);

            printf("\n Division => %d",a/b);
        }
        else if(op==5)
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