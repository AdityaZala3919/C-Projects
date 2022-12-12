#include<stdio.h>

main()
{
	int maths,phy,chem;
	
	printf("\n Enter Marks Of Mathematics => ");
	scanf("%d",&maths);
	printf("\n Enter Marks Of Physics => ");
	scanf("%d",&phy);
	printf("\n Enter Marks Of Chemistry => ");
	scanf("%d",&chem);
	
	printf("\n Total Marks = %d", maths+phy+chem);
	
	if(maths+phy+chem>50)
	{
		printf("\n Party Time");
	}
	else
	{
		printf("\n Call Your Parents");
	}
}
