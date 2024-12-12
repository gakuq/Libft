# include "libft.h"

void    ft_bzero(void *s, size_t len)
{
    unsigned char *ptr = s;

    if (!s)
        return ;
        
    while (len--)
    {
        *ptr = 0;
        ptr++;
    }
}