#include<stdio.h>

main()
{
	int x;
	
	printf("\n Enter Day Number => ");
	scanf("%d",&x);
	
	if(x==1)
	{
		printf("\n Monday");
	}
	else if(x==2)
	{
		printf("\n Tuesday");
	}
	else if(x==3)
	{
		printf("\n Wednesday");
	}
	else if(x==4)
	{
		printf("\n Thursday");
	}
	else if(x==5)
	{
		printf("\n Friday");
	}
	else if(x==6)
	{
		printf("\n Saturday");
	}
	else if(x==7)
	{
		printf("\n Sunday");
	}
	else
	{
		printf("\n Error");
	}
}
