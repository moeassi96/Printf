/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:40:35 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:30 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing a positive Integer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%u\n", 123);
	printf("%-15s", "printf:");
	len1 = printf("hello world%u\n", 123);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing a negative Integer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%u\n", -123);
	printf("%-15s", "printf:");
	len1 = printf("hello world%u\n", -123);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing inserting multiple Integers:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%uhello world%u\n", 123, 321);
	printf("%-15s", "printf:");
	len1 = printf("%uhello world%u\n", 123, 321);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test4(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a character:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%u\n", 'a');
	printf("%-15s", "printf:");
	len1 = printf("hello world%u\n", 'a');
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_u(void)
{
	printf("Testing 'u'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
	test4();
}
