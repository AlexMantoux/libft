#include "libft.h"
#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char *ret;

    ret = malloc(sizeof(char) * (size + 1));
    if (!ret)
        return (NULL);
    ft_memset(ret, 0, size + 1);
    return (ret);
}

// int main(void)
// {
//     return (0);
// }