/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:51:24 by moassi            #+#    #+#             */
/*   Updated: 2024/06/11 11:13:44 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_print_rec(char *base, unsigned long long nb)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nb >= (unsigned long long)base_len)
		len += ft_print_rec(base, nb / base_len);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putbase(char *base, unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (ft_putchar(base[0]));
	return (len + ft_print_rec(base, (unsigned long long)n));
}
