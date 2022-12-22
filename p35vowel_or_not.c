#include<stdio.h>

main()
{
    char op;

    printf("\n Enter Any Alphabet => ");
    scanf("%c",&op);

    if (op=='a' || op=='e' || op=='i' || op=='o' || op=='u' || op=='A' || op=='E' || op=='I' || op=='O' || op=='U')
    {
        printf("\n This Alphabet Is Vowel");
    }
    else
    {
        printf("\n This Is Not Vowel");
    }
}