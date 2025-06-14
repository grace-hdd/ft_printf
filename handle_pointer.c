#include "ft_printf.h"

int handle_pointer(va_list args)
{
    unsigned long ptr;

    ptr = va_arg(args, unsigned long);
    return (ft_putptr(ptr));
}
