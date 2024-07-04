/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_rightalign.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:37:25 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:37 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing d and i:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%10d%2i\n", 1234, 12);
	printf("%-15s", "printf:");
	len1 = printf("%10d%2i\n", 1234, 12);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing p:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%15p%2p\n", "hello", NULL);
	printf("%-15s", "printf:");
	len1 = printf("%15p%2p\n", "hello", NULL);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing s with precision:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%15.3s\n", "hello");
	printf("%-15s", "printf:");
	len1 = printf("%15.3s\n", "hello");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_rightalign(void)
{
	printf("Testing 'right align' flag\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
}
