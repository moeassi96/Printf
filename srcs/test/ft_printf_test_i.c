/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:19:03 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:46 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing inserting an Integer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%i\n", 123);
	printf("%-15s", "printf:");
	len1 = printf("hello world%i\n", 123);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing inserting multiple Integers:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("%dhello world%i\n", 123, 321);
	printf("%-15s", "printf:");
	len1 = printf("%dhello world%i\n", 123, 321);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a character:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%i\n", 'a');
	printf("%-15s", "printf:");
	len1 = printf("hello world%i\n", 'a');
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_i(void)
{
	printf("Testing 'i'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
}
