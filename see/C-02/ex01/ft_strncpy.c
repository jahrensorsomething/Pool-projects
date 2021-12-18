/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:18:11 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/07 15:57:50 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "0a1b2c3d4e5f6g7h8i9j";
	char	b[10];
	printf("Before a: %s\n", a);
	printf("Before b: %s\n", b);
	ft_strncpy(b, a, 5);
	printf("After a: %s\n", a);
	printf("After b: %s\n", b);
}
*/
