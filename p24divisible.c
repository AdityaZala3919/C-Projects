#include<stdio.h>

main()
{
	int a,b;
	
	printf("\n Enter Number A => ");
	scanf("%d",&a);
	printf("\n Enter Number B => ");
	scanf("%d",&b);
	
	if(a%b==0)
	{
		printf("\n A Is Divisible By B");
	}
	else
	{
		printf("\n A Is Not Divisible By B");
	}
}
