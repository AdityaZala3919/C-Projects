#include<stdio.h>

int main()
{
	int a;
	char op;
	
	printf("\n Enter P For Pizza");
	printf("\n Enter B For Burger");
	printf("\n Enter F For Fries");
	printf("\n Enter G For Garlic Bread");
	printf("\n Enter Any Alphabet => ");
	scanf("%c",&op);
	
	if (op=='p' || op=='P')
	{
		printf("\n Price Of 1 Pizza = 200");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",200*a);
	}
	else if (op=='b' || op=='B')
	{
		printf("\n Price Of 1 Burger = 100");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",100*a);
	}
	else if (op=='f' || op=='F')
	{
		printf("\n Price Of 1 Plate Of French Fries = 50");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",50*a);
	}
	else if (op=='g' || op=='G')
	{
		printf("\n Price Of 1 Garlic Bread = 80");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",80*a);
	}
	else 
	{
		printf("\n Error");
	}

return 0;
}
