/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:52:15 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/06 16:13:44 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if (str[a] < '0' || str[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int a = ft_str_is_numeric("Hello");
	int b = ft_str_is_numeric("Hello!");
	int c = ft_str_is_numeric("Hello0");
	int d = ft_str_is_numeric("01234");
	int e = ft_str_is_numeric("");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
	printf("01234: %d\n", d);
	printf(": %d\n", e);
}
*/
