/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:29:28 by frushiti          #+#    #+#             */
/*   Updated: 2023/04/08 14:29:47 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nb, char x)
{
	char			*hex;
	int				len;

	len = 0;
	hex = "0123456789abcdef";
	if (x == 'X')
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		len += ft_putnbr_hex(nb / 16, x);
	len += write(1, &hex[nb % 16], 1);
	return (len);
}
