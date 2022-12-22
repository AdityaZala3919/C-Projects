#include<stdio.h>

int main()
{
	int x,op;
	
	printf("\nEnter 1 for square");
	printf("\nEnter 2 for cube");
	printf("\nEnter =>");
	scanf("%d",&op);

	switch (op)
	{
		case 1:
			printf("\n Enter Number => ");
			scanf("%d",&x);
			printf("\n Square => %d",x*x);
			break;

		case 2:
			printf("\n Enter Number => ");
			scanf("%d",&x);
			printf("\n Cube => %d",x*x*x);
			break;
		
		default:

			printf("\n Error");
			
			break;
	}
    return 0;
}