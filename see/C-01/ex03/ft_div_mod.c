/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:35:18 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 18:17:07 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	a = 20;
	b = 10;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d\n", div);
	printf("mod: %d", mod);
}
*/
