/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:53:08 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/07 19:07:37 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	z;

	a = 0;
	z = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[z] != '\0')
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
int main ()
{
	char *t;

	char b[20] = "Oh hi Mark!";
	char a[30] = "I did not hit her, I did not! ";

	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}
*/
