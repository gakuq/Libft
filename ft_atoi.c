# include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    int sign;

    if (!str)
        return 0;
    
    while ((*str >= '\t' && *str <= '\r') || *str == ' ')
        str++;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}