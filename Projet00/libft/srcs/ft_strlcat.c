#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;
    size_t res;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    while (dst[i] &&  i < dstsize)
        i++;
    j = 0;
    if (dst_len <= dstsize)
        res = dstsize + src_len;
    else
        res = src_len + i;
    while (src[j] && i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (res);
}

int main(void)
{
    return (0);
}
