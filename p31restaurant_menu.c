#include<stdio.h>

int main()
{
	int a,op;
	
	printf("\n Enter 1 For Pizza");
	printf("\n Enter 2 For Pasta");
	printf("\n Enter 3 For Burger");
	printf("\n Enter 4 For Fries");
	printf("\n Enter 5 For Garlic Bread");
	printf("\n Enter Number => ");
	scanf("%d",&op);
	
	if (op==1)
	{
		printf("\n Price Of 1 Pizza = 200");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",200*a);
	}
	else if (op==2)
	{
		printf("\n Price Of 1 Bowl Of Pasta = 150");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",150*a);
	}
	else if (op==3)
	{
		printf("\n Price Of 1 Burger = 100");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",100*a);
	}
	else if (op==4)
	{
		printf("\n Price Of 1 Plate Of French Fries = 50");
		printf("\n Enter Quantity => ");
		scanf("%d",&a);
		printf("\n Total Price = %d",50*a);
	}
	else if (op==5)
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
