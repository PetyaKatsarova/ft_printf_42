/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/27 16:30:36 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/30 11:50:23 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// %p The void * pointer argument has to be printed in hexadecimal format.

static int	ft_plen(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static	void	ft_to_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_to_ptr(n / 16);
		ft_to_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long p)
{
	int	length;

	length = write(1, "0x", 2);
	if (length == -1)
		return (-1);
	if (p == 0)
		length += write(1, "0", 1);
	else
	{
		ft_to_ptr(p);
		length += ft_plen(p);
	}
	return (length);
}
