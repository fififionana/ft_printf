/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:39:23 by frushiti          #+#    #+#             */
/*   Updated: 2023/04/08 14:39:35 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_putnbr_unsigned(nb / 10);
		len += ft_putnbr_unsigned(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}
