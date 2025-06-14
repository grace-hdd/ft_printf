#include "ft_printf.h"

int	handle_hex_lower(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_hex(n, 'x'));
}

int	handle_hex_upper(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_hex(n, 'X'));
}