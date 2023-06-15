/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:36:36 by frushiti          #+#    #+#             */
/*   Updated: 2023/04/08 14:37:25 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_phex(unsigned long long nb)
{
	char	*hex;
	int		len;

	len = 0;
	hex = "0123456789abcdef";
	if (nb >= 16)
		len += ft_putnbr_phex(nb / 16);
	write(1, &hex[nb % 16], 1);
	len++;
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	ptr_value;
	int					len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	ptr_value = (unsigned long long)ptr;
	write(1, "0x", 2);
	len = ft_putnbr_phex(ptr_value);
	return (len + 2);
}
