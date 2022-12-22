#include<stdio.h>

main()
{
    char ch;

    printf("\n Enter Any Alphabet => ");
    scanf("%c",&ch);

    if (isupper(ch))
    {
        printf("%c",tolower(ch));
    }
    else if (islower(ch))
    {
        printf("%c",toupper(ch));
    }
    else
    {
        printf("\n Error");
    }
}