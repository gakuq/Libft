#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *i = (unsigned char *)s1;
    unsigned char *j = (unsigned char *)s2;

    while (n--)
    {
        if (*i != *j)
            return (*i - *j);
        i++;
        j++;
    }
    return 0;
}