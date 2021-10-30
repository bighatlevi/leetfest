#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N = 10;

int isInWork( int A[], int t )
{
    int k;
    for ( k = 0; k < N; k++ )
    {
        if ( A[k] == t )
            return (k+1);
    }
    return k;
}

int main()
{
    int L[N];
    int k,p,q,s,tmp;

    srand(time(NULL));

    for ( k = 0; k < N; k++ )
        L[k] = k+1;

    for ( k = 0; k < N/2; k++ )
    {
        p = rand() % N;
        do {
            q = rand() % N;
        } while ( p == q );
        tmp = L[p];
        L[p] = L[q];
        L[q] = tmp;
    }

    for ( k = 0; k < N; k++ )
        printf("%2d ", L[k]);
    printf("\n");

    s = 0;
    for ( k = 0; k < N; k++ )
    {
        p = rand() % N + 1;
        q = isInWork( L, p );
        printf("%d\n", q);
        s += q;
    }
    printf("Sum: %d Avg %d\n", s, s/N);
    s = s + N/2;
    printf("Sum: %d Avg %d\n", s, s/N);
    return 0;
}
