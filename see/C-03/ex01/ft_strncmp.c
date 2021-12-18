/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:22:43 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/09 16:07:24 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] || s2[a]) && (a < n))
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
	int	strncmp;
	int c = 5;

	char a[] = "abcd";
	char b[] = "abcdef";
	strncmp = ft_strncmp(a, b, c);
	printf("%d\n", strncmp);
	return (0);
}
*/
