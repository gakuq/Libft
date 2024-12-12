# include "libft.h"

char    *ft_strdup(const char *s)
{
    char *dst;
    size_t len;

    len = ft_strlen(s);
    dst = malloc(len + 1);
    if (!dst)
        return (NULL);
    ft_strlcpy(dst, s, len + 1);

    return (dst);
}