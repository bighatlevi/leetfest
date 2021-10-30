#include <stdio.h>

void countTo(int num)
{
        printf("Num: ");
        scanf("%d", &num);

        for(int i = 0; i < num; i++)
        {
                printf("%d ", i + 1);
        }
        printf("\n");
}

int isAdult(int years)
{
        if(years > 17)
                return 1;
        else
                return 0;
}

int main()
{
        countTo(6);

        int age, ans;
        printf("How old: ");
        scanf("%d", &age);
        ans = isAdult(age);

        if(ans == 1)
                printf("Yes, %d is adult", age);
        else
                printf("No, %d is not adult", age);
        printf("\n");

        return 0;
}
