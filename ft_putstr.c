/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfichet <anfichet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:58:57 by anfichet          #+#    #+#             */
/*   Updated: 2023/12/02 18:09:37 by anfichet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *addr_count)
{
	*addr_count += write(1, &c, 1);
}

void	ft_putstr(char *str, int *addr_count)
{
	ssize_t	count;
	ssize_t	len;
	ssize_t	written;

	if (str == NULL)
		*addr_count = write(1, "(null)", 6);
	len = ft_strlen(str);
	if (len == -1)
	{
		*addr_count = -1;
		return ;
	}
	count = 0;
	while (count < len)
	{
		written = write(1, str + count, len - count);
		count += written;
		if (written == -1)
		{
			*addr_count = -1;
			return ;
		}
	}
	*addr_count += count;
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str && str[len])
	{
		len++;
		if (len > 2147483647)
			return (-1);
	}
	return (len);
}

size_t	ft_strlenpercent(const char *str)
{
	size_t	len;

	len = 0;
	if (str == NULL)
		return (-1);
	while (str[len] && str[len] != '%')
	{
		len++;
		if (len > 2147483647)
			return (-1);
	}
	return (len);
}

int is_specifier(char c)
{
    return (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == 'p' || c == '%');
}
