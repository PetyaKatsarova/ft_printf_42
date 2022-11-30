/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pkatsaro <pkatsaro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/29 11:06:49 by pkatsaro      #+#    #+#                 */
/*   Updated: 2022/11/30 13:43:09 by pkatsaro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// ?!!!!!!!! NB: RENAME TO libftprintf.c
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int				ft_printchar(int c);
int				ft_printstr(char *str);
int				ft_printperc(void);
int				ft_print_num(int n);
// static char		*ft_uitoa(unsigned int n);
int				ft_print_unsigned_int(unsigned int n);
// static int		ft_to_hex(unsigned int n, const char format);
unsigned int	ft_print_hex(unsigned int n, const char format);
int				ft_print_s(char *str);
int 			ft_print_ptr(unsigned long p);
int				ft_printf(const char *format, ...);

#endif