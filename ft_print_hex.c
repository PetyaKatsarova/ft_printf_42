/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/27 15:18:25 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/12/02 19:03:53 by pkatsaro      ########   odam.nl         */
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

static int	ft_to_hex(unsigned int n, const char c)
{
	unsigned int	str_len;

	str_len = 0;
	if (n >= 16)
	{
		if (ft_to_hex(n / 16, c) == -1)
			return (-1);
	}
	n = n % 16;
	if (n <= 9)
		str_len = ft_putchar((n + '0'), 1);
	else
	{
		if (c == 'x')
			str_len = ft_putchar((n - 10 + 'a'), 1);
		else if (c == 'X')
			str_len = ft_putchar((n - 10 + 'A'), 1);
	}
	return (str_len);
}

unsigned	int	ft_print_hex(unsigned int n, const char c)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		if (ft_to_hex(n, c) == -1)
			return (-1);
	}
	return (ft_hex_len(n));
}
