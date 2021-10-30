#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int sides)
{
        int n;
        n = rand() % sides + 1;
        return n;
}

void dashes(int n)
{
        for(int i = 0; i < n; i++)
                printf("-");
        printf("\n");
}

int main()
{
        int d1, d2;
        srand(time(NULL));
        printf("Super dice program\n");

        d1 = roll(6);
        d2 = roll(10);

        printf("%d: ", d1);
        dashes(d1);

        printf("%d: ", d2);
        dashes(d2);

        return 0;
}
