#include<stdio.h>

main()
{
    char op;

    printf("\n Enter Any Alphabet => ");
    scanf("%c",&op);

    switch (op)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n This Alphabet Is A Vowel");
            break;
        
        default:

            printf("\n Error");
            
            break;
    }
}