#include<stdio.h>

main()
{
	int rupees;
	
	printf("\n Enter Amount => ");
	scanf("%d",&rupees);
	
	if(rupees>500)
	{
		printf("\n Buy Pizza");
	}
	else
	{
		printf("\n Buy PaniPuri");
	}
}
