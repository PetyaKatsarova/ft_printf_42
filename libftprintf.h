/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 15:38:41 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/23 18:26:14 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int         ft_printchar(int    c);
int         ft_printstr(va_list args);
int         ft_print_num(va_list args);
int         ft_printf(const char *format, ...);
int main(void);

#endif