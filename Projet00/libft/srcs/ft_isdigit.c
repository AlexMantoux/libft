#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    char c2 = '1';
    
    printf("%d\n", ft_isdigit(c1));
    printf("%d", ft_isdigit(c2));
    return 0;
}
*/