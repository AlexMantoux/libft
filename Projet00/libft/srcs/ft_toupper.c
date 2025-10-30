#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return c;
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    char c2 = 'B';
    
    printf("%c\n", ft_toupper(c1));
    printf("%c\n", ft_toupper(c2));
    return 0;
}
*/