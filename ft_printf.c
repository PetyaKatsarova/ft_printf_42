/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 15:39:14 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/23 18:28:09 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Ddon’t implement the buffer management of the original printf().
// • Your function has to handle the following conversions: cspdiuxX%
/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
*/
//  return the number of characters printed (not including the trailing
//  `\0' used to end output to strings
#include "libftprintf.h"
#include "libft.h"

static int  ft_format(va_list args, const char c)
{
    int str_len;

    str_len = 0;
    if (c == 'c')
        str_len += ft_printchar(va_arg(args, int));
    else if (c == '%')
        str_len += write(1, "%", 1);
    else if (c == 's')
        str_len += ft_printstr(args);
    else if (c == 'i' || c == 'd')
        str_len += ft_print_num(args);
    return (str_len);
}

int ft_printf(const char *format, ...)
{
    int str_len;
    int i;
    va_list args;
    va_start (args, format);

    str_len = 0;
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            str_len += ft_format(args, format[++i]);
        else
            str_len += write(1, &format[i], 1);
        i++;
    }
    va_end (args);
    return (str_len);
}
