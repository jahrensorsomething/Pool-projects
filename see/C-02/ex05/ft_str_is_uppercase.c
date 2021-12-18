/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:49:58 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 18:54:32 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if (str[a] < 'A' || str[a] > 'Z')
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
	int a = ft_str_is_uppercase("HELLO");
	int b = ft_str_is_uppercase("Hello!");
	int c = ft_str_is_uppercase("HELLO0");
	int d = ft_str_is_uppercase("01234");
	int e = ft_str_is_uppercase("");
	printf("HELLO: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("HELLO0: %d\n", c);
	printf("01234: %d\n", d);
	printf(": %d\n", e);
}
*/
