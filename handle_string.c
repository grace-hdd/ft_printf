#include "ft_printf.h"

int handle_string(va_list args)
{
    char *s;

    s = va_arg(args, char *);
    return (ft_putstr_printf(s));
}
