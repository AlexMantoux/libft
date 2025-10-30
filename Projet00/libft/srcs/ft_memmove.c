#include "libft.h"

/*MEME QUE FT_MEMCPY SAUF SI CHEVAUCHEMENT ALORS COPIE DANS AUTRE SENS (ie. i--)*/
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    unsigned char *dst_ptr;
    unsigned char *src_ptr;
    dst_ptr = (unsigned char *)dst;
    src_ptr = (unsigned char *)src;

    i = 0;
    if (dst_ptr < src_ptr)
    {
        while (i < len)
        {
            dst_ptr[i] = src_ptr[i];
            i++;
        }
        return (dst);
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            dst_ptr[i] = src_ptr[i];
        }
        return (dst);
    }
}
/*
int main(void)
{
    return (0);
}
*/