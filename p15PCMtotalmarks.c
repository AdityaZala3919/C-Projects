#include<stdio.h>

main()
{
	int maths,phy,chem;
	
	printf("\n Enter Marks Of Maths =>");
	scanf("%d",&maths);
	printf("\n Enter Marks Of Physics =>");
	scanf("%d",&phy);
	printf("\n Enter Marks Of Chemistry =>");
	scanf("%d",&chem);
	
	printf("\n Total Marks=%d", maths+phy+chem);
}
