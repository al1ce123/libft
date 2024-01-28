#include "libft.h"

static size_t find_strings_nbr(const char *s, const char c)
{
    size_t nbr;
    size_t i;

    if (!s)
        return (0);
    nbr = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            while (s[i] && s[i] != c)
                i++;
            nbr++;
            continue ;
        }
        i++;
    }
    return (nbr);
}

static void allocate_strings(char ***array, const char *s, const char c)
{
    size_t size;
    size_t i;
    size_t index;

    size = 0;
    i = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            size = 0;
            while (s[i] && s[i] != c)
            {
                i++;
                size++;
            }
            (*array)[index] = (char *)malloc(sizeof(char) * (size + 1));
            index++;
        }
        if (s[i])
            i++;
    }
    (*array)[index] = NULL;
}


static void create_strings(char **array, const char *s, const char c)
{
    size_t i;
    size_t j;
    size_t index;

    i = 0;
    j = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            j = 0;
            while (s[i] && s[i] != c)
            {
                array[index][j] = s[i];
                i++;
                j++;
            }
            array[index][j] = '\0';
            index++;
        }
        if (s[i])
            i++;
    }
}

static void free_strings(char ** array, size_t nbr)
{
    size_t i;

    i = 0;
    while (i < nbr)
    {
        free(array[i]);
        i++;
    }
    free(array);
}


char **ft_split(char const *s, char c)
{
    size_t nbr;
    char **array;

    if (!s)
        return (NULL);
    nbr = find_strings_nbr(s, c);
    array = (char **)malloc(sizeof(char *) * (nbr + 1));
    if (!array)
        return (NULL);
    allocate_strings(&array, s, c);
    create_strings(array, s, c);
    return (array);
}

int main(void)
{
    const char *inputString = "Hello,World,C";
    char delimiter = ',';

    char **result = ft_split(inputString, delimiter);

    while (*result)
    {
        printf("%s\n", *result);
        result++;
    }

    free_strings(result, find_strings_nbr(inputString, delimiter));

    return 0;
}
