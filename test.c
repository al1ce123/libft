#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int *ptr;

    ptr = (int *)calloc(1000000000, sizeof(int));
    if (!ptr)
        printf("Null Ptr\n");

    free (ptr);
    return 0;
}