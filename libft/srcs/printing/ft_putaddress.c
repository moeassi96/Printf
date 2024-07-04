/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:42:31 by moassi            #+#    #+#             */
/*   Updated: 2024/06/11 10:57:19 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putaddress(void *ptr)
{
	char				*base;
	unsigned long long	n;
	int					len;

	n = (unsigned long long)ptr;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += ft_putbase(base, n);
	return (len);
}
