/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:35:35 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/29 14:41:15 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hx_long_len(unsigned long n)
{
	int	hexlen;

	hexlen = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		hexlen++;
		n = n / 16;
	}
	return (hexlen);
}

int	ft_put_long_hex(unsigned long n)
{
	int	hexa_len;

	hexa_len = ft_hx_long_len(n);
	if (n >= 16)
	{
		ft_put_long_hex(n / 16);
		ft_put_long_hex(n % 16);
	}
	else if (n <= 9)
		ft_put_character(n + '0');
	else if (n > 9 && n < 16)
	{
		ft_put_character(n - 10 + 'a');
	}
	return (hexa_len);
}

int	ft_int_ptr(unsigned long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_put_long_hex(n);
	return (len);
}
// int main()
// {
// 	int	a;

// 	printf("\n%p\n", ft_int_ptr(&a));
// }
