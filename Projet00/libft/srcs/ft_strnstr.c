#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t  n)
{
    size_t i;
    size_t j;

    if (needle[0] == '\0')
        return ((char *)haystack + 0);
    i = 0;
    while (haystack[i] && i < n)
    {
        j = 0;
        while (haystack[i + j] == needle [j] && needle[j] && (i + j) < n)
            j++;
        if (needle[j] == 0)
                return ((char *)haystack + i);
        i++;
    }
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char string[] = "Hello, World!";
//     char substring[] = "World";
//     char *result;

//     result = ft_strnstr(string, substring);
//     printf("The substring is: %s\n", result);

//     return 0;
// }