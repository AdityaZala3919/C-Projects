#include<stdio.h>

main()
{
	int x,op;
	
	printf("\nEnter 1 for square");
	printf("\nEnter 2 for cube");
	printf("\nEnter =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\n Enter Number => ");
		scanf("%d",&x);
		printf("\n Square = %d",x*x);
	}
	else if(op==2)
	{
		printf("\n Enter Number => ");
		scanf("%d",&x);
		printf("\n Cube = %d",x*x*x);
	}
	else
	{
		printf("\nWrong choice");		
	}
}
