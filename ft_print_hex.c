/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/27 15:18:25 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/27 16:26:48 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
//0xABC

int ft_hex_len(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}

void ft_to_hex(unsigned int n, const char format)
{
    if (n >= 16)
    {
        ft_to_hex(n / 16, format);
        ft_to_hex(n % 16, format);
    }
    else{
        if (n <= 9)
            ft_putchar_fd((n + '0'), 1);
        else
        {
            if (format == 'x')
                ft_putchar_fd((n - 10 + 'a'), 1);
            if (format == 'X')
                ft_putchar_fd((n - 10 + 'A'), 1);
        }
    }
}

unsigned int ft_print_hex(unsigned int n, const char format)
{
    if (n == 0)
        return (write(1, "0", 1));
    else
        ft_to_hex(n, format);
    return (ft_hex_len(n));
}