#include<stdio.h>

main()
{
    char ch;

    printf("\n Enter Any Alphabet => ");
    scanf("%c",&ch);

    if(isupper(ch))
    {
        printf("\n This Alphabet Is In Upper Case");
    }
    else if(islower(ch))
    {
        printf("\n This Alphabet Is In Lower Case");
    }
    else
    {
        printf("\n Error");
    }
}