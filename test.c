#include "libft.h"
#include <stdio.h>

int main(void) {
    int a = 99;
    int i = 1;
    int* ptr = &a;

    ptr[i] = 12;

    printf("%d\n", ptr[i]);
    return 0;
}