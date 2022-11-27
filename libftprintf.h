/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 15:38:41 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/27 15:46:17 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int             ft_printchar(int    c);
int             ft_printstr(char *str);
int             ft_printperc(void);
int             ft_print_num(int n);
static char	    *ft_uitoa(unsigned int n);
int             ft_print_unsigned_int(unsigned int n);
unsigned int    ft_print_hex(unsigned int n, const char format);
int             ft_printf(const char *format, ...);
int main(void);

#endif