# include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (unsigned char)c)
            return (s);
        s++;
    }

    if ((char)c == '\0')
        return (s);
    return (NULL);
}