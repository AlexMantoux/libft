#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main(void)
{
    char s1[] = "alex";
    char s2[] = "alexis";
    
    printf("%d\n", ft_strcmp(s1, s2));
    return 0;
}
*/