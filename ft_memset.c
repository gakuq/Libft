# include "libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    unsigned char *ptr = s;

    while (len--)
    {
        *ptr = (unsigned char)c;
        ptr++;
    }

    return s;
}