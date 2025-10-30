#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t  i;

    unsigned char *dst_ptr;
    unsigned char *src_ptr;

    dst_ptr = (unsigned char *)dst;
    src_ptr = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        dst_ptr[i] = src_ptr[i];
        if (src_ptr[i] == (unsigned char)c)
            return (dst_ptr + (i + 1));
        i++;
    }
    return (NULL);
}

/*
int main(void)
{
    return (0);
}
*/