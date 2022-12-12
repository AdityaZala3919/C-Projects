#include<stdio.h>

main()
{
	int x,op;
	float h,b,r;
	
	printf("\n Enter 1 For Area Of Triangle");
	printf("\n Enter 2 For Area Of Circle");
	printf("\n Enter 3 For Sign Of Number");
	printf("\n Enter Number => ");
	scanf("%d",&op);
	
	if (op==1)
	{
		printf("\n Enter Height =");
		scanf("%f",&h);
		printf("\n Enter Base =");
		scanf("%f",&b);
		printf("\n Area Of Triangle = %.2f",b*h*0.5);
	}
	else if (op==2)
	{
		printf("\n Enter Radius =");
		scanf("%f",&r);
		printf("\n Area Of Circle = %.2f",3.14*r*r);
	}
	else if (op==3)
	{
		printf("\n Enter Number =");
		scanf("%d",&x);
		
		if (x>0)
		{
			printf("\n The Number Is Positive");
		}
		else if (x<0)
		{
			printf("\n The Number Is Negative");
		}
		else
		{
			printf("\n The Number Is Neither Positive Nor Negative");
		}
	}
	else
	{
		printf("\n Error");
	}
}
