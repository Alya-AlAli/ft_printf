/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:35:29 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/22 15:03:35 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_put_character(char a);
int	ft_string(char *s);
int	ft_int_ptr(unsigned long n);
int	ft_put_hexa(unsigned int n, char check);
int	ft_put_nbr(int nb);
int	ft_unsigned_nbr(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif
