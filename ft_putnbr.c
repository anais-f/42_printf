/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:51:15 by anfichet          #+#    #+#             */
/*   Updated: 2023/11/30 15:30:34 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *addr_count)
{
	size_t		lenbase;
	long		nb;

	lenbase = ft_strlen(base);
	nb = (long int)nbr;
	if (nb < 0)
	{
		ft_putchar('-', addr_count);
		nb = -nb;
	}
	if (nb >= (long)lenbase)
		ft_putnbr_base(nb / lenbase, base, addr_count);
	ft_putchar(base[nb % lenbase], addr_count);
}

void	ft_unsigned_putnbr(unsigned long int nbr, char *base, int *addr_count)
{
	size_t			lenbase;
	unsigned long	nb;

	lenbase = ft_strlen(base);
	nb = (unsigned long int)nbr;
	if (nb >= lenbase)
		ft_unsigned_putnbr(nb / lenbase, base, addr_count);
	ft_putchar(base[nb % lenbase], addr_count);
}

void	ft_put_address(unsigned long int nbr, int *addr_count)
{
	if (!nbr)
		*addr_count = write(1, "(nil)", 5);
	else
	{
		*addr_count = write(1, "0x", 2);
		ft_unsigned_putnbr(nbr, BASE16_LOWER, addr_count);
	}
}
