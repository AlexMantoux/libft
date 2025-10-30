#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char *ptr;

    ptr = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);

}

/*
#include <stdio.h>
int main(void)
{
    char str[20] = "Hello World!";
    
    ft_memset(str, 'A', 5);
    printf("Test 1: %s\n", str);
    
    ft_memset(str, 'X', 12);
    printf("Test 2: %s\n", str);
    
    return 0;
}
*/