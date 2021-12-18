/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:52:02 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/06 17:37:24 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if (str[a] < 32 || str[a] > 126)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	int a = ft_str_is_printable("Hello");
	int b = ft_str_is_printable("Hello!");
	int c = ft_str_is_printable("Hello0");
	int d = ft_str_is_printable("01234");
	int e = ft_str_is_printable(" ");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
	printf("01234: %d\n", d);
	printf(": %d\n", e);
}
*/
