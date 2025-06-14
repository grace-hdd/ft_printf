#include "ft_printf.h"

int handle_decimal(va_list args)
{
    int n;

    n = va_arg(args, int);
    return (ft_putnbr_printf(n));
}