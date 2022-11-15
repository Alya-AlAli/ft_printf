/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:22:53 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/24 14:05:59 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hxlen(unsigned int n)
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

int	ft_put_hexa(unsigned int n, char check)
{
	int	hexa_len;

	hexa_len = ft_hxlen(n);
	if (n >= 16)
	{
		ft_put_hexa(n / 16, check);
		ft_put_hexa(n % 16, check);
	}
	else if (n <= 9)
		ft_put_character(n + '0');
	else if (n > 9 && n < 16)
	{
		if (check == 'x')
			ft_put_character(n - 10 + 'a');
		else if (check == 'X')
			ft_put_character(n - 10 + 'A');
	}
	return (hexa_len);
}
// int	ft_put_hexa(unsigned int n, char check)
// {
// 	int	len;

// 	len = ft_hxlen(n);
// 	if (n >= 16)
// 	{
// 		ft_put_hexa(n / 16, check);
// 		ft_put_hexa(n % 16, check);
// 	}
// 	else if (n <= 9)
// 	{
// 		if (check == 'x')
// 			ft_put_character(n - 10 + 'a');
// 		if (check == 'X')
// 			ft_put_character(n - 10 + 'A');
// 	}
// 	return (len);
// }

// int main(void)
// {
// 	// ft_printf("[%%x]: [%x]\n", 76);
// 	// printf("[%%x]: [%x]\n\n", 76);

// 	//printf("%x", ft_put_hexa(17, 'x'));
// 	printf("%x", 76);
// }
// int main()
// {
// 	printf("\n%x\n", ft_put_hexa( 76, 'x'));
// }
