#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
// # include "libft/libft.h"

int ft_printf_(const char *format, ...);

int ft_putstr_printf(char *s);
int ft_putchar_printf(char c);
int ft_putnbr_printf(int n);
int ft_putnbr_unsigned(unsigned int n);
int ft_putnbr_hex(unsigned int n, char format);
int ft_putptr(unsigned long ptr);

int handle_char(va_list args);
int handle_string(va_list args);
int handle_pointer(va_list args);
int handle_decimal(va_list args);
int handle_integer(va_list args);
int	handle_unsigned(va_list args);
int	handle_hex_lower(va_list args);
int	handle_hex_upper(va_list args);
int handle_percent(va_list args);

#endif