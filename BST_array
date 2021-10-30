// Binary Search Tree - as an array
//  - limited size/depth
//  - limited use - just to get us started
//
//  - let 0 represent an unused array entry


#include <stdio.h>
#include <stdlib.h>

//#define LAST 7
// change to 63 once you get printing fixed
#define LAST 63
// the last index in the array that can be used
//   for a tree value.
// hint/caution, this may not be the size of the array


void pre(int tr[], int r)
{
    if ( r > LAST || tr[r] == 0)
        return;
    printf("%2d ", tr[r]);
    pre(tr, r*2);
    pre(tr, r*2+1);
}

void in(int tr[], int r)
{
    if ( r > LAST || tr[r] == 0)
        return;
    in(tr, r*2);
    printf("%2d ", tr[r]);
    in(tr, r*2+1);
}

void post(int tr[], int r)
{
    if ( r > LAST || tr[r] == 0)
        return;
    post(tr, r*2);
    post(tr, r*2+1);
    printf("%2d ", tr[r]);
}

// iterative: check if val is in the tree
// tr is the array, for a well-formed tree
int isInTreeI( int tr[], int val )
{
    int loc = 1;
    while ( tr[loc] != 0 )
    {
        if (tr[loc] == val)
            return 1;
        if ( val < tr[loc] )
            loc = loc * 2;
        else
            loc = loc * 2 + 1;
     }
    return 0;
}

// recursive: check if val is in the tree
// tr is the array;  r is the root index
int isInTreeR( int tr[], int r,  int val )
{
    if (tr[r] == val)
        return 1;
    if (tr[r] == 0)
        return 0;
    if(val<tr[r])
        return isInTreeR( tr, r*2, val);
    else
        return isInTreeR( tr, r*2+1, val);
}

// recursive: insert val into the tree
// tr is a well-formed tree
void insertR( int tr[], int r, int val )
{
    if ( tr[r] == 0 )
    {
        tr[r] = val;
        return ;
    }

    if (val < tr[r])
        insertR(tr, r*2, val);
    else
        insertR(tr, r*2+1, val);

}

// iterative: insert val into the tree
void insertI( int tr[], int val )
{
    int loc = 1;
    // find spot
    while ( tr[loc] != 0 )
    {
        if ( val < tr[loc] )
            loc = loc *2;
        else
            loc = loc *2 + 1;
    }
    tr[loc] = val;
}

int main()
{
    int t[LAST+1]={0};
    int i, v;

    // on the quiz you'll replace these 2 lines
    int dat[] = {0,20,30,10,5,15};
    int many = 6;
//  int dat[] = {0,40,30,20,10,5,4,50,60,70,80,90};
//  int many = 12;

    for (i = 1; i < many; ++i)
    {
        v = dat[i];
        printf("%d\n", v);
        //insertR( t, 1, v );
        insertI( t, v );
    }

    //for (i = 1; i < LAST+1; ++i)
    for (i = 1; i < many; ++i)
      printf("%2d ", t[i]);
    printf("\n");

    printf(" preorder: ");
    pre( t, 1 );
    printf("\n");

    printf("  inorder: ");
    in( t, 1 );
    printf("\n");

    printf("postorder: ");
    post( t, 1 );
    printf("\n");


    // run search twice for testing
    for ( i = 0; i < 2; i++ )
    {
        printf("Value to search: ");
        scanf("%d", &v);
        //printf("Found: %d\n", isInTreeI(t,v));
        printf("Found: %d\n", isInTreeR(t,1,v));
    }

    return 0;
}
