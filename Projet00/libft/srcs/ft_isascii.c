#include "libft.h"

int ft_isascii(int c)
{
    if (c < 0 || c > 127)
        return (0);
    return (1);
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    int c2 = 128;
    
    printf("%d\n", ft_isascii(c1));
    printf("%d", ft_isascii(c2));
    return 0;
}
*/
