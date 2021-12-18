/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:20:09 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 19:08:41 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
			a++;
	}
	return (str);
}
/*
#include<stdio.h>
int main(void)
{
    char x[] = "Pizza";
    char y[] = "PIZZA";
    char z[] = "pizza";

    ft_strlowcase(x);
    ft_strlowcase(y);
    ft_strlowcase(z);
    printf("Pizza: %s\n", x);
    printf("PIZZA: %s\n", y);
    printf("pizza: %s\n", z);
}
*/
