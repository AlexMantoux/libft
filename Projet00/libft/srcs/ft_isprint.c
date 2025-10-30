#include "libft.h"

int ft_isprint(int c)
{
    if (c < 32 || c > 126)
        return (0);
    return (1);
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = '~';
    int c2 = 127;
    
    printf("%d\n", ft_isprint(c1));
    printf("%d", ft_isprint(c2));
    return 0;
}
*/