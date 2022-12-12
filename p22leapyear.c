#include<stdio.h>

main()
{
	int year;
	
	printf("\n Enter Year => ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n This Is A Leap Year");
	}
	else
	{
		printf("\n This Is Not A Leap Year");
	}
}
