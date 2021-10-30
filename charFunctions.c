#include <stdio.h>

void rept(int i, char c)
{
        for ( int count = 0; count < i; count++)
        {
                printf("%c", c);
        }
        printf("\n");
}

int isVowel(char c)
{
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

char toGrade(int i)
{
        if ( i < 0 || i > 100 )
        {
                return '?';
        }

        else if ( i < 60 )
        {
                return 'F';
        }

        else if ( i < 70 )
        {
                return 'D';
        }

        else if ( i < 80 )
        {
                return 'C';
        }

        else if ( i < 90 )
        {
                return 'B';
        }

        else if ( i <= 100 )
        {
                return 'A';
        }
}

int main()
{
        int prints, test, score;
        char symbol, letter, grade;

        printf("Input repetitions: ");
        scanf("%d", &prints);
        printf("Input symbol: ");
        scanf(" %c", &symbol);
        rept(prints, symbol);

        printf("Input char: ");
        scanf(" %c", &letter);
        test = isVowel(letter);
        printf("%d\n", test);

        printf("Input numeric score: ");
        scanf("%d", &score);
        grade = toGrade(score);
        printf("Letter grade: %c\n", grade);

        return 0;
}
