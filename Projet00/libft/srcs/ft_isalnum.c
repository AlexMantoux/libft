#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    char c2 = '1';
    char c3 = '*';
    
    printf("%d\n", ft_isalnum(c1));
    printf("%d\n", ft_isalnum(c2));
    printf("%d", ft_isalnum(c3));
    return 0;
}
*/