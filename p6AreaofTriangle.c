#include <stdio.h>

main()
{
	float h,b,area;
	
	printf("\nEnter Height =>");
	scanf("%f",&h);
	printf("\nEnter Base =>");
	scanf("%f",&b);
	
	area=h*b*0.5;
	printf("\nArea of Triangle = %.2f",area);
}
