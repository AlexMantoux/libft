#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    size_t i;
    size_t len;
    char *ret;

    len = ft_strlen(s1);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ret[i] = s1[i];
        i++;
    }
    ret[i] = '\0';
    return ret;
}

/*
int main(void)
{
    return (0);
}
*/