#include<stdio.h>

main()
{
	int a,b;
    char op;
	
	printf("\n Enter + For Addition");
	printf("\n Enter - For Substraction");
	printf("\n Enter * For Multiplication");
	printf("\n Enter / For Division");
	printf("\n Enter => ");
	scanf("%c",&op);

    switch (op)
    {
    case '+':
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Addition => %d",a+b);
        break;
    case '-':
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Substraction => %d",a-b);
        break;
    case '*':
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Multiplication => %d",a*b);
        break;
    case '/':
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Division => %d",a/b);
        break;
    
    default:

        printf("\n Error")
        
        break;
    }
}