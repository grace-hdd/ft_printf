#include "ft_printf.h"

int ft_putnbr_hex(unsigned int n, char format)
{
    int count;
    char *base;

    count = 0;
    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (n >= 16)
        count += ft_putnbr_hex(n / 16, format);
    count += ft_putchar_printf(base[n % 16]);
    return (count);
}
