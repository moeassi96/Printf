/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:57:02 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:33 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	test1(void)
{
	int	len;
	int	len1;

	printf("Testing inserting a string:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%s\n", " from moe");
	printf("%-15s", "printf:");
	len1 = printf("hello world%s\n", " from moe");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int	len;
	int	len1;

	printf("Testing inserting an empty string:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%s\n", "");
	printf("%-15s", "printf:");
	len1 = printf("hello world%s\n", "");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_s(void)
{
	printf("Testing 's'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
}
