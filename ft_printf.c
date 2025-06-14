#include "ft_printf.h"

static int	handle_conversion(char c, va_list args)
{
	if (c == 'c')
		return (handle_char(args));
	else if (c == 's')
		return (handle_string(args));
	else if (c == 'p')
		return (handle_pointer(args));
	else if (c == 'd')
		return (handle_decimal(args));
	else if (c == 'i')
		return (handle_integer(args));
	else if (c == 'u')
		return (handle_unsigned(args));
	else if (c == 'x')
		return (handle_hex_lower(args));
	else if (c == 'X')
		return (handle_hex_upper(args));
	else if (c == '%')
		return (handle_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += handle_conversion(format[i + 1], args);
			i += 2;
		}
		else
		{
			count += ft_putchar_printf(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}