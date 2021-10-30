#include <stdio.h>

void countUp( int start, int end)
{
        for (start; start < end + 1; start++)
        {
                printf("%d ", start);
        }
        printf("\n");
}

void countDown( int start, int end)
{
        for (end; end > start - 1; end--)
        {
                printf("%d ", end);
        }
        printf("\n");
}

void countBetween( int start, int end)
{
        if (start < end)
        {
                countUp(start, end);
        }
        else
        {
                countDown(end, start);
        }
}

int main()
{
        int x, y;
        printf("Enter starting and ending values: ");
        scanf("%d %d", &x, &y);

        printf("Up %d:%d -- ", x, y);
        countUp(x, y);

        printf("Down %d:%d -- ", x, y);
        countDown(y, x);

        printf("Between %d:%d -- ", x, y);
        countBetween(x, y);

        return 0;
}
