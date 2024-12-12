# include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t d;
    size_t i;

    if (!dst || !src)
        return (0);
    
    d = 0;
    while (dst[d] != '\0' && d < dstsize)
        d++;
    
    if (dstsize <= d)
        return (dstsize + ft_strlen(src));
    
    i = 0;
    while (src[i] && (d + i) < dstsize - 1)
    {
        dst[d + i] = src[i];
        i++;
    }
    dst[d + i] = '\0';
    return (d + ft_strlen(src));
}
