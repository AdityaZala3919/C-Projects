#include<stdio.h>

int main()
{
	int x;
	char op;
	
	printf("\nEnter s for square");
	printf("\nEnter c for cube");
	printf("\nEnter =>");
	scanf("%c",&op);

	switch (op)
	{
		case 's':
		case 'S':
			printf("\n Enter Number => ");
			scanf("%d",&x);
			printf("\n Square => %d",x*x);
			break;

		case 'c':
		case 'C':
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