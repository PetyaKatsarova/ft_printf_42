/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_unsigned_int.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/27 10:43:26 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/27 14:16:14 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

static int	ft_num_len(unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_uitoa(unsigned int n)
{
	unsigned int len;
	char	*str;

	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
	{
		len = write(1, "0", 1);
		return (len);
	}
	while (n != 0)
	{
		str[len--] = n % 10 + 48; // why is that ???? + 48, then 48 + 48 = 96 ?? if it is - doesnt work???? 
		n = n / 10;
	}
	return (str);	
}

int	ft_print_unsigned_int(unsigned int n)
{
	int	len;
	char *num;

	len = 0;
	if (n == 0)
		len = write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		len = ft_printstr(num);
		free(num);
	}	
	return (len);
}
