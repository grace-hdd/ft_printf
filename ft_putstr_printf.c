#include "ft_printf.h"

int ft_putstr_printf(char *s)
{
    int count;

    if (!s)
        return (NULL);
    count = ft_strlen(s);
    wrtie(1, s, count);
    return (count);
}
