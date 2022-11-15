/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:32:38 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/30 16:54:12 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_check(char a, va_list arg)
{
	int	len;

	len = 0;
	if (a == 'c')
		len += ft_put_character(va_arg(arg, int));
	else if (a == 's')
		len += ft_string(va_arg(arg, char *));
	else if (a == 'p')
		len += ft_int_ptr(va_arg(arg, unsigned long));
	else if ((a == 'd') || (a == 'i'))
		len += ft_put_nbr(va_arg(arg, int));
	else if (a == 'u')
		len += ft_unsigned_nbr(va_arg(arg, unsigned int));
	else if ((a == 'x') || (a == 'X'))
		len += ft_put_hexa(va_arg(arg, unsigned int), a);
	else if (a == '%')
		len += ft_put_character('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		count;
	va_list	arg;

	len = 0;
	count = 0;
	va_start(arg, format);
	while (format[count])
	{
		if (format[count] == '%')
		{
			len += ft_check(format[count + 1], arg);
			count++;
		}
		else
			len += write(1, &format[count], 1);
		count++;
	}
	va_end(arg);
	return (len);
}
// int	main(void)
// {
// 	int	a;

// 	ft_printf("[%%s]: [%s]\n", "This is a string.");
// 	printf("[%%s]: [%s]\n\n", "This is a string.");
// 	ft_printf("[%%c]: [%c]\n", 'M');
// 	printf("[%%c]: [%c]\n\n", 'M');
// 	ft_printf("[%%d]: [%d]\n", 42);
// 	printf("[%%d]: [%d]\n\n", 42);
// 	ft_printf("[%%x]: [%x]\n", 76);
// 	printf("[%%x]: [%x]\n\n", 76);
// 	ft_printf("[%%p]: [%p]\n", &a);
// 	printf("[%%p]: [%p]\n\n", &a);
// 	ft_printf("[%%u]: [%u]\n", -1);
// 	printf("[%%u]: [%u]\n\n", -1);
// 	printf("\n\n%s", NULL);
// 	ft_printf("\n\n%s", NULL);
// }

// int main()
// {
// 	int res1;
// 	int res2;

// 	res1 = ft_printf("1 => %X\n", 255);
// 	res2 = printf("2 => %X\n", 255);

// 	printf("\n\n res1 = %d  || res2 = %d\n", res1, res2);
// 	return (0);
// }
