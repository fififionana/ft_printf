/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:30:14 by frushiti          #+#    #+#             */
/*   Updated: 2023/04/08 14:30:29 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len = write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		len++;
		nb = -nb;
		len += ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
		len++;
	}
	return (len);
}
