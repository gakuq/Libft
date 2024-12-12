# include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = dst;
    const unsigned char *s = src;

    if (!dst || !src)
        return NULL;

    // Backward copy
    if (d > s)
    {
        d += len - 1;
        s += len - 1;
        while (len--)
        {
            *d-- = *s--;
        }
    }
    else
    {
    	// Forward copy
    	while (len--)
    	{
        	*d++ = *s++;
    	}
    }
    	return dst;
}
