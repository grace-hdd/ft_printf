#include "ft_printf.h"

int ft_putnbr_printf(int n)
{
    int count;
    char *str;

    str = ft_atoi(n);
    if (!str)
        return (0);
    count = ft_strlen(str);
    wrtie(1, str, count);
    free(str);
    return (count);
}
