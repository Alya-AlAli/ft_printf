/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alal-ali <alal-ali@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:22:31 by alal-ali          #+#    #+#             */
/*   Updated: 2022/03/30 17:08:12 by alal-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_nbr(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_unsigned_nbr(nb / 10);
		len += ft_unsigned_nbr(nb % 10);
	}
	else
		len += ft_put_character(nb + '0');
	return (len);
}
