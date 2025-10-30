#include "libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)
{
    size_t i;

    i = 0;
    while (src[i] && i < len)
    {
        dst[i] = src[i];
        i++;
    }

    while (i < len)
    {
        dst[i] = '\0';
        i++;
    }
    return dst;
}
/*
int main(void)
{
    return (0);
}
*/