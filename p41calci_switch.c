#include<stdio.h>

main()
{
	int a,b,op;
	
	printf("\n Enter 1 For Addition");
	printf("\n Enter 2 For Substraction");
	printf("\n Enter 3 For Multiplication");
	printf("\n Enter 4 For Division");
	printf("\n Enter => ");
	scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Addition => %d",a+b);
        
    case 2:
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Substraction => %d",a-b);
        break;
    case 3:
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Multiplication => %d",a*b);
        break;
    case 4:
        printf("\n Enter Number 1 => ");
        scanf("%d",&a);
        printf("\n Enter Number 2 => ");
        scanf("%d",&b);
        printf("\n Division => %d",a/b);
        break;
    
    default:

        printf("\n Error");
        
        break;
    }
}