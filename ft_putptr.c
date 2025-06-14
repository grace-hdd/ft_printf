#include "ft_printf.h"

static int ft_putptr_hex(unsigned long n)
{
    int count;
    char *base;

    count = 0;
    base = "0123456789abcdef";
    if (count >= 16)
        count += ft_putptr_hex(n / 16);
    count += ft_putchar_printf(base[n % 16]);
    return (count);
}

int ft_putptr(unsigned long ptr)
{
    int count;

    count = 0;
    if (ptr == 0)
    {
        count += ft_putstr_printf("NULL");
        return (count);
    }
    count += ft_putptr_hex(ptr);
    return (count);
}
