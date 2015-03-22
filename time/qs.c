#include <stdio.h>
#include <stdlib.h>

int values[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;

    printf("Before sorting the list is: \n");
    for( n = 0 ; n < 10; n++ ) {
        printf("%d ", values[n]);
    }

    qsort(values, 10, sizeof(int), cmpfunc);

    printf("\nAfter sorting the list is: \n");
    for( n = 0 ; n < 10; n++ ) {
        printf("%d ", values[n]);
    }

    printf("\n");
    return(0);
}
