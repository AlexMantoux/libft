#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

/*
#include <stdio.h>
#include <string.h> 
int main(void)
{
    char str1[20] = "Hello World!";
    char str2[20] = "Hello World!";
    
    printf("Avant ft_bzero : %s\n", str1);
    ft_bzero(str1, 5);
    printf("Après ft_bzero (5 premiers octets à 0) : %s\n", str1);
    
    printf("\nAvant bzero : %s\n", str2);
    bzero(str2, 5);
    printf("Après bzero (5 premiers octets à 0) : %s\n", str2);
    
    char str3[20] = "Test";
    ft_bzero(str3, 0);
    printf("\nCas limite len=0 (ft_bzero) : %s\n", str3);
    
    char str4[20] = "Suppr entier";
    ft_bzero(str4, sizeof(str4));
    printf("\nAprès ft_bzero sur tout le tableau : '%s'\n", str4);
    
    return 0;
}
*/