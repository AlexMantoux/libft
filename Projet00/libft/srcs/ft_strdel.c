#include "libft.h"
#include <stdlib.h>

void    ft_strdel(char **as)
{
    if (as && *as)
    {
        free(*as);
        *as = NULL;
    }
}

// int main(void)
// {
//     return (0);
// }