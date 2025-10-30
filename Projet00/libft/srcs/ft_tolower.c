#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return c;
}

/*
#include <stdio.h>
int main(void)
{
    char c1 = 'a';
    char c2 = 'B';
    
    printf("%c\n", ft_tolower(c1));
    printf("%c\n", ft_tolower(c2));
    return 0;
}
*/