/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 17:26:25 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/27 14:14:04 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int  ft_printchar(int    c)
{
    write(1, &c, 1);
    return (1);
}

int ft_printperc(void)
{
    write(1, "%", 1);
    return (1);
}

int ft_printstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
        return (0);
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int	ft_num_len(unsigned int n)
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

