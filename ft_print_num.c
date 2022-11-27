/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_num.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 18:05:24 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/23 18:30:00 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int ft_print_num(va_list args)
{
    int num;

    num = va_arg(args, int);
    ft_putnbr_fd(num, 1);
    return (50);
}