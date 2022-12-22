#include<stdio.h>

int main()
{
    char op;

    printf("\n Which City Is Capital Of Gujarat ?");
    printf("\n A- Ahmedabad");
    printf("\n B- Gandhinagar");
    printf("\n C- Surat");
    printf("\n D- Vadodara");
    printf("\n Enter Correct Option => ");
    fflush(stdin);
    scanf("%c",&op);

    if (op=='b' || op=='B')
    {
        printf("\n Correct Option");
    
        printf("\n What Is 1+2 ?");
        printf("\n A- 3");
        printf("\n B- 4");
        printf("\n C- 5");
        printf("\n D- 2");
        printf("\n Enter Correct Option => ");
        fflush(stdin);
        scanf("%c",&op);

        if (op=='a' || op=='A')
        {
            printf("\n Correct Option");

            printf("\n What Festival Occurs On 14th January ?");
            printf("\n A- New Year");
            printf("\n B- Diwali");
            printf("\n C- MakarSakranti");
            printf("\n D- Holi");
            printf("\n Enter Correct Option => ");
            fflush(stdin);
            scanf("%c",&op);

            if (op=='c' || op=='C')
            {
                printf("\n Correct Option");

                printf("\n What Is Rate Of Dollar In Indian Rupees ?");
                printf("\n A- 70 Rs.");
                printf("\n B- 80 Rs.");
                printf("\n C- 91 Rs.");
                printf("\n D- 82 Rs.");
                printf("\n Enter Correct Option => ");
                fflush(stdin);
                scanf("%c",&op);

                if (op=='d' || op=='D')
                {
                    printf("\n Correct Option");

                    printf("\n Who Is Prime Minister Of India ?");
                    printf("\n A- Narendra Modi");
                    printf("\n B- King John Un");
                    printf("\n C- Donald Trumph");
                    printf("\n D- Rahul Gandhi");
                    printf("\n Enter Correct Option => ");
                    fflush(stdin);
                    scanf("%c",&op);

                    if (op=='a' || op=='A')
                    {
                        printf("\n Correct Option");
                    }
                    else
                    {
                        printf("\n You Are Awarded With 1,00,00,000 Rs.");
                    }
                }
                else
                {
                    printf("\n You Are Awarded With 10,00,000 Rs.");
                }
            }
            else
            {
                printf("\n You Are Awarded With 1,00,000 Rs.");
            }
        }
        else
        {
            printf("\n You Are Awarded With 10,000 Rs.");
        }
    }
    else
    {
        printf("\n Incorrect Option");
    }
}