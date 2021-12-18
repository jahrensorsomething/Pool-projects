/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:25:34 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/07 19:06:11 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	z;

	a = 0;
	z = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (z < nb && src[z])
	{
		dest[a] = src[z];
		a++;
		z++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char a[20] = "01234";
	char b[20] = "567899999";

	char *t = ft_strncat(a, b, 5);
	printf("%s\n", t);
	return (0);
}
*/
