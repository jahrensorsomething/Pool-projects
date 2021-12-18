/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:01:21 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 19:06:22 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main(void)
{
	char x[] = "Pizza";
	char y[] = "PIZZA";
	char z[] = "pizza";

	ft_strupcase(x);
	ft_strupcase(y);
	ft_strupcase(z);
	printf("Pizza: %s\n", x);
	printf("PIZZA: %s\n", y);
	printf("pizza: %s\n", z);
}
*/
