/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:40:14 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 18:51:47 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{	
			return (1);
		}
		if (str[a] < 'a' || str[a] > 'z')
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
	int a = ft_str_is_lowercase("hello");
	int b = ft_str_is_lowercase("Hello!");
	int c = ft_str_is_lowercase("hello0");
	int d = ft_str_is_lowercase("01234");
	int e = ft_str_is_lowercase("");
	printf("hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("hello0: %d\n", c);
	printf("01234: %d\n", d);
	printf(": %d\n", e);
}
*/
