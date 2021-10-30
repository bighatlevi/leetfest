#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buildList(int A[], int *sz)
{
    int n, k, x;

    n = rand() % 20 + 1;
    *sz = n;

    for (k=0; k<n; k++)
    {
        x = rand() % 999 + 1;
        A[k] = x;
    }
}
void addEnd(int A[], int *sz, int val)
{
    int n = *sz;
    A[*sz] = val;
    n++;
    *sz = n;
    //(*sz)++;
}
void addBegin(int A[], int *sz, int val)
{
    //shift the data to the right by 1 spot
    int k;
    for (k = *sz; k >= 1; k--)
    {
        A[k] = A[k-1];
    }
    //insert val & increment length
    A[0] = val;
    *sz += 1;
}
int deleteBegin(int A[], int *sz)
{
    int val, k, ns;

    val = A[0];
    ns = *sz - 1;

    for (k = 0; k < *sz; k++)
        A[k] = A[k+1];

    *sz = ns;
    return val;
}
int deleteEnd(int A[], int *sz)
{
    int val, n;
    n = *sz;
    val = A[n-1];
    n--;
    *sz = n;
    
    return val;
}
int isIn(int A[], int sz, int val)
{
    int k;
    for(k=0; k<sz; k++)
    {
        if(A[k] == val)
        {
            return 1; //found it
        }
    }
    return 0; //not found
}
void printList(int A[], int sz)
{
    int k;
    printf("List: len %d: ", sz);
    for (k=0; k<sz; k++)
        printf("%d ", A[k]);
    printf("\n");
}
int main()
{
    int nums[750];
    int x,y,len;

    srand(time(NULL));

    buildList(nums,&len);
    printList(nums,len);

    printf("Data to add: ");
    scanf("%d", &x);

    //addEnd(nums,&len, x);
    addBegin(nums,&len,x);
    printList(nums,len);

    x = deleteEnd(nums, &len);
    printList(nums,len);
    printf("Removed %d\n", x);

    y = deleteBegin(nums, &len);
    printList(nums,len);
    printf("Removed %d\n", y);
    return 0;
}
