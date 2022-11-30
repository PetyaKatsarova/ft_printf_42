/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/27 15:18:25 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/30 13:49:17 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
//0xABC

static int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != '\0')
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static int	ft_putchar(char d, int fd)
{
	return (write(fd, &d, sizeof(char)));
}
static int	ft_to_hex(unsigned int n, const char format)
{
	int	val;

	val = 0;
	if (n >= 16)
	{
		ft_to_hex(n / 16, format);
		ft_to_hex(n % 16, format);
	}
	else
	{		
		if (n <= 9)
		{
			val = n + '0';
			//ft_putchar((n + '0'), 1);
			val = ft_putchar((n + '0'), 1);
		}
		else
		{
			if (format == 'x')
				val = ft_putchar((n - 10 + 'a'), 1);
				//ft_putchar((n - 10 + 'a'), 1);
			if (format == 'X')
				val = ft_putchar((n - 10 + 'A'), 1);
				//ft_putchar((n - 10 + 'A'), 1);
		}
	}
	return (val);
}

unsigned	int	ft_print_hex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		if (ft_to_hex(n, format) == -1)
			return (-1);
	}
	return (ft_hex_len(n));
}
