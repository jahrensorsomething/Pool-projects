/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:29:55 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/09 16:37:16 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] < s2[a])
		{
			return (-1);
		}
		if (s1[a] > s2[a])
		{
			return (1);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	strcmp;

	char a[] = "abcdef";
	char b[] = "abcdef";
	strcmp = ft_strcmp(a, b);
	printf("%d\n", strcmp);
	return (0);
}
*/
