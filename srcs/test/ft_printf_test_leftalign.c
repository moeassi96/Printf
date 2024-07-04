/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_leftalign.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 23:02:28 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:42 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a string with len less than width:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%-15s123\n", "123");
	printf("%-15s", "printf:");
	len1 = printf("%-15s123\n", "123");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a string with len greater than width:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%-1s123\n", "123");
	printf("%-15s", "printf:");
	len1 = printf("%-1s123\n", "123");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing not inserting a width:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%-s123\n", "123");
	printf("%-15s", "printf:");
	len1 = printf("%-s123\n", "123");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_leftalign(void)
{
	printf("Testing '-' flag\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
}
