# include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *i = (unsigned char *)s;
    unsigned char j = (unsigned char)c;

    while (n--)
    {
        if (*i == j)
            return (i);
        i++;
    }
    return NULL;
}