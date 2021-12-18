/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:06:19 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/08 15:25:42 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[15] = "yo";
	printf("Source before: %s\n", src);
	printf("Destination before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Source after: %s\n", src);
	printf("Destination after: %s\n", dest);
	return (0);
}
*/
