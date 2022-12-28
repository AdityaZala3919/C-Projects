#include<stdio.h>

int main()
{
    int a[100];

    printf("\n Enter Number 1 => ");
    scanf("%d",&a[0]);
    printf("\n Enter Number 2 => ");
    scanf("%d",&a[1]);
    printf("\n Enter Number 3 => ");
    scanf("%d",&a[2]);
    printf("\n Enter Number 4 => ");
    scanf("%d",&a[3]);
    printf("\n Enter Number 5 => ");
    scanf("%d",&a[4]);
    
    printf("\n Addition => %d",a[0] + a[1] + a[2] + a[3] + a[4]);
    return 0;
}