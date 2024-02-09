#include "libft.h"
#include <string.h>

int main(void) {

    const char *str1 = "test hello world";
    const char *str2 = "XD";
    char *ptr;

    ptr = ft_strnstr(str1, str2, 12);
    if (!ptr)
        return -1;
    printf("%s\n", ptr);

    return 0;
}