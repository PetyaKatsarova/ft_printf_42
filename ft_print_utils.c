/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_utils.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 17:26:25 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/23 18:00:40 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int  ft_printchar(int    c)
{
    write(1, &c, 1);
    return (1);
}

int ft_printstr(va_list args)
{
    int     str_len;
    char    *str;

    str = va_arg(args, char *);
    ft_putstr_fd(str, 1);
    return (ft_strlen(str));
}

