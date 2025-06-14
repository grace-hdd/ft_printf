#include "ft_printf.h"

int handle_char(va_list args)
{
    char c;


    c = va_arg(args, int);
    return (ft_putchar_printf(c));
}
