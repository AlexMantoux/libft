#include "libft.h"
#include <stdlib.h>

void    ft_memdel(void **ap)
{
    if (ap && *ap)
    {
        free(*ap);
        *ap = NULL;
    }
}

// int main(void)
// {
//     return (0);
// }