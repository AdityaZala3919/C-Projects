#include<stdio.h>

main()
{
	int x;
	
	printf("\n Enter Number => ");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("\n Number Is Positive");
	}
	else if(x==0)
	{
		printf("\n Number Is Neither Positive Nor Negative");
	}
	else
	{
		printf("\n Number Is Negative");
	}
}
