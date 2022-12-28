#include<stdio.h>

int main()
{
    int a[100]={11,9,-30,44,21,-56,78,7,19,-20,34,55};
    int i,n=12;
    int c=0;
 
    printf("\n Values");
    for(i=0;i<n;i++)
    {
        if(a[i]%7==0)
        {
            printf(" %d",a[i]);
            c++;
        }
    }
    printf("\n Count = %d",c);
    return 0;
}