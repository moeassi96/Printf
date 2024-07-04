/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_zeroflag.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 01:18:50 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:18 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing positive d and i:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010d\n", 1234);
	printf("%-15s", "printf:");
	len1 = printf("%010d\n", 1234);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
	printf("Testing negative d and i:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010d\n", -1234);
	printf("%-15s", "printf:");
	len1 = printf("%010d\n", -1234);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing positive u:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010u\n", 1234);
	printf("%-15s", "printf:");
	len1 = printf("%010u\n", 1234);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
	printf("Testing negative u:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010u\n", -1234);
	printf("%-15s", "printf:");
	len1 = printf("%010u\n", -1234);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing positive x:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010x\n", 789789789);
	printf("%-15s", "printf:");
	len1 = printf("%010x\n", 789789789);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
	printf("Testing negative x:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010x\n", -789789789);
	printf("%-15s", "printf:");
	len1 = printf("%010x\n", -789789789);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test4(void)
{
	int	len;
	int	len1;

	printf("Testing no number after 0:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%0x\n", 789789789);
	printf("%-15s", "printf:");
	len1 = printf("%0x\n", 789789789);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
	printf("Testing big random input:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%010x%02u%013i%011X%05d\n",
			789789789, -12311, -2313122, 323232, 44444);
	printf("%-15s", "printf:");
	len1 = printf("%010x%02u%013i%011X%05d\n",
			789789789, -12311, -2313122, 323232, 44444);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_zeroflag(void)
{
	printf("Testing '0 flag'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
	test4();
}
