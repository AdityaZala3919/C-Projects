#include<stdio.h>

int main()
{
    int x,maths,phy,chem;

    printf("\n Enter Marks Of Mathematics => ");
    scanf("%d",&maths);
    printf("\n Enter Marks Of Physics => ");
    scanf("%d",&phy);
    printf("\n Enter Marks Of Chemistry => ");
    scanf("%d",&chem);

    printf("\n Total => %d",maths+phy+chem);
    x=maths+phy+chem;

    if (x>=0 && x<50)
    {
        printf("\n C Grade");
    }
    else if (x>=50 && x<100)
    {
        printf("\n B Grade");
    }
    else if (x>=100 && x<150)
    {
        printf("\n A Grade");
    }
    return 0;
}