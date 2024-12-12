# include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char *ptr;
    size_t total;

    if (size == 0 || count == 0)
        return (malloc(1));
        
    total = count * size;
    if ((total / count) != size)
        return (NULL);
    
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
        
    ft_memset(ptr, 0, count * size);
    return (ptr);
}
