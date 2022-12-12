#include <stdio.h>

main()
{
	int eng,hindi,ss,total;
	
	printf("\nEnter Marks of English =>");
	scanf("%d",&eng);
	printf("\nEnter Marks of Hindi =>");
	scanf("%d",&hindi);
	printf("\nEnter Marks of SS =>");
	scanf("%d",&ss);
	
	total=eng+hindi+ss;
	printf("\nTotal = %d",total);
	printf("\n%d is total",total);
}
