/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:22:34 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/30 17:07:49 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (nb < 0)
	{
		len += ft_put_character('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		len += ft_put_nbr(nb / 10);
		len += ft_put_nbr(nb % 10);
	}
	else
		len += ft_put_character(nb + '0');
	return (len);
}
// int main()
// {
// 	printf("\n%d\n", ft_put_nbr(-454));
// }
