#include<stdio.h>

int main()
{
    int x,i,c1=0,s1=0,c2=0,s2=0;

    printf("\n Enter Number => ");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("\n %d Is Even",i);
            c1++;
            s1=s1+i;
        }
        else
        {
            printf("\n %d Is Odd",i);
            c2++;
            s2=s2+i;
        }
    }
    printf("\n Count Of Even => %d",c1);
    printf("\n Sum Of Even => %d",s1);
    printf("\n Count Of Odd => %d",c2);
    printf("\n Sum Of Odd => %d",s2);
}