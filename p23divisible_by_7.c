#include<stdio.h>

main()
{
	int x;
	
	printf("\n Enter Number => ");
	scanf("%d",&x);
	
	if(x%7==0)
	{
		printf("\n This Number Is Divisible By 7");
	}
	else
	{
		printf("\n This Number Is Not Divisible By 7");
	}
}
