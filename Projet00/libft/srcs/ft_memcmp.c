#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    unsigned char *s1_ptr;
    unsigned char *s2_ptr;
    s1_ptr = (unsigned char *)s1;
    s2_ptr = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (s1_ptr[i] != s2_ptr[i])
            return (s1_ptr[i] - s2_ptr[i]);
        i++;
    }
    return (0);
}

/*
int main(void)
{
    return (0);
}
*/