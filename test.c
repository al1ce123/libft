#include "libft.h"
#include <string.h>

int main(void) {

    printf("%d\n", ft_atoi("-9223372036854775809"));
    printf("%d\n", atoi("-9223372036854775809"));
    printf("%d\n", ft_atoi("9223372036854775808"));
    printf("%d\n", atoi("9223372036854775808"));
    printf("%d\n", ft_atoi("9223372036854775809"));
    printf("%d\n", atoi("9223372036854775809"));
    printf("%d\n", ft_atoi("+45"));
    printf("%d\n", atoi("+45"));
    printf("%d\n", ft_atoi("-9223372036854"));
    printf("%d\n", atoi("-9223372036854"));
    printf("%d\n", ft_atoi("9223372036854"));
    printf("%d\n", atoi("9223372036854"));
    printf("%d\n", ft_atoi("9223372036854"));
    printf("%d\n", atoi("9223372036854"));
    return 0;
}