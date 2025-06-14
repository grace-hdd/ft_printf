#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += ft_putnbr_unsigned(n / 10);
    count += ft_putchar_printf(n % 10 + '0');
    return (count);
}
