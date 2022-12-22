#include<stdio.h>

int main()
{
    int no;

    printf("\n Enter Number => ");
    scanf("%d",&no);

   
    no==0 ?printf("No is 0") : no>0 ?printf("\n The Number Is Positive") :printf("\n The Number Is Negative");


    return 0;
}