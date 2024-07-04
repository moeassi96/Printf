/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:24:01 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:53 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a character:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("h%cello world\n", 'z');
	printf("%-15s", "printf:");
	len1 = printf("h%cello world\n", 'z');
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing inserting multiple characters:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("h%c%cello world\n", 'z', 'z');
	printf("%-15s", "printf:");
	len1 = printf("h%c%cello world\n", 'z', 'z');
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing inserting an Integer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("h%cello world\n", 324243234);
	printf("%-15s", "printf:");
	len1 = printf("h%cello world\n", 324243234);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_c(void)
{
	printf("Testing 'c'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
}
