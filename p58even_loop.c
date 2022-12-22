#include<stdio.h>

int main()
{
    int x,i;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if (i%2==0)
        {
            printf("\n %d=Even",i);
        }
        else
        {
            printf("\n %d=Odd",i);
        }
    }
  return 0;  
}
