/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:35:39 by moassi            #+#    #+#             */
/*   Updated: 2024/06/11 16:19:47 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include <limits.h>

void	ft_printf_test(void)
{
	ft_printf_test_c();
	ft_printf_test_d();
	ft_printf_test_i();
	ft_printf_test_u();
	ft_printf_test_x();
	ft_printf_test_s();
	ft_printf_test_p();
	ft_printf_test_leftalign();
	ft_printf_test_zeroflag();
	ft_printf_test_rightalign();
}

int	main(void)
{
	ft_printf_test();
	printf("% 10d\n", 10);
	ft_printf("% 10d\n", 10);
	printf("% 10d\n", -10);
	ft_printf("% 10d\n", -10);
	printf(" %-1d ", -9);
	ft_printf(" %-1d ", -9);
}
