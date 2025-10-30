#include "libft.h"

int ft_isalpha(int c)
{
    if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
        return 0;
    return 1;
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    char c2 = '1';
    
    printf("%d\n", ft_isalpha(c1));
    printf("%d", ft_isalpha(c2));
    return 0;
}
*/