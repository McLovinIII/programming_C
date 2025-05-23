#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    printf("Sum: %d\n", sum(5, 1, 2, 3, 4, 5));
    printf("Min: %d\n", minV(5, 1, 2, 3, 9, 4));
    printf("Max: %d\n", maxV(5, 1, 2, 3, 6, 4));
    printf("Avg: %.2lf\n", avg(5, 1, 2, 3, 10, 4));
    return 0;
}
