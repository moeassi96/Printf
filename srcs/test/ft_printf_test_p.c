/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 00:00:25 by moassi            #+#    #+#             */
/*   Updated: 2024/06/10 23:59:39 by moassi           ###   ########.fr       */
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
	len = ft_printf("hello world%p\n", " from moe");
	printf("%-15s", "printf:");
	len1 = printf("hello world%p\n", " from moe");
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test2(void)
{
	int		len;
	int		len1;
	void	*ptr;

	ptr = NULL;
	printf("Testing inserting a NULL pointer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%p\n", ptr);
	printf("%-15s", "printf:");
	len1 = printf("hello world%p\n", ptr);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

static void	test3(void)
{
	int		len;
	int		len1;
	int		val;
	int		*ptr;

	val = 1;
	ptr = &val;
	printf("Testing inserting an int pointer:\n");
	printf("%-15s", "ft_printf:");
	fflush(stdout);
	len = ft_printf("hello world%p\n", ptr);
	printf("%-15s", "printf:");
	len1 = printf("hello world%p\n", ptr);
	printf("%-15s", "ft_printf: ");
	printf("%d\n", len);
	printf("%-15s", "printf: ");
	printf("%d\n\n", len1);
}

void	ft_printf_test_p(void)
{
	printf("Testing 'p'\n");
	printf("---------------------------------------------------\n");
	test1();
	test2();
	test3();
}
