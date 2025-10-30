#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    unsigned char *dst_ptr;
    unsigned char *src_ptr;
    dst_ptr = (unsigned char *)dst;
    src_ptr = (unsigned char *)src;

    i = 0;
    while (i < n)
    {
        dst_ptr[i] = src_ptr[i];
        i++;
    }
    return (dst);
}
/*
int main(void)
{
    return (0);
}
*/