/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:45:48 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 18:10:32 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>
int	main()
{
	int a;
	int b;
	a = 11;
	b = 5;
	printf("Before a: %d\n", a);
	printf("Before b: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("After a: %d\n", a);
	printf("After b: %d", b);
}
*/
