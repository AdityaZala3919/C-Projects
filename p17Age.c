#include<stdio.h>

main()
{
	int age;
	
	printf("\n Enter Your Age =>");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\n You Are Eligible For Voting");
	}
	else
	{
		printf("\n You Are Not Eligible For Voting");
	}
}
