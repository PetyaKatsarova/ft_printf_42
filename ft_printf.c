/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 15:39:14 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/12/16 11:26:45 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// * Don’t implement the buffer management of the original printf().
// * Your function has to handle the following conversions: cspdiuxX%
// * return the number of characters printed (not including the trailing
//  `\0' used to end output to strings

#include "ft_printf.h" 
#include "libft.h"

static int	ft_format(va_list args, const char c)
{
	int	str_len;

	str_len = 0;
	if (c == 'c')
		str_len += ft_printchar(va_arg(args, int));
	else if (c == '%')
		str_len += ft_printperc();
	else if (c == 's')
		str_len += ft_printstr(va_arg(args, char *));
	else if ((c == 'i' || c == 'd'))
		str_len += ft_print_num(va_arg(args, int));
	else if (c == 'u')
		str_len += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if ((c == 'x' || c == 'X'))
		str_len += ft_print_hex(va_arg(args, int), c);
	else if (c == 'p')
		str_len += ft_print_ptr(va_arg(args, unsigned long));
	else
		str_len += write(1, &c, 1);
	return (str_len);
}

static int	shorter(va_list args, const char c, int str_len)
{
	int	test;

	test = 0;
	if (str_len >= 0)
		test = ft_format(args, c);
	if (test == -1)
		return (-1);
	else if (c)
		str_len += test;
	return (str_len);
}

int	ft_printf(const char *format, ...)
{
	int		str_len;
	int		i;
	va_list	args;

	va_start(args, format);
	str_len = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				str_len = shorter(args, format[i + 1], str_len);
				// if (str_len == -1)
				// 	return (-1);
				i++;
			}
		}
		else if (str_len >= 0)
			str_len += write(1, &format[i], 1);
		if (format[i])
			i++;
	}
	va_end (args);
	return (str_len);
}
