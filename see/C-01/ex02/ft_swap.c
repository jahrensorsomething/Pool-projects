/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:25:01 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/05 18:16:49 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	storage;

	storage = *a;
	*a = *b;
	*b = storage;
}
/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	a = 4;
	b = 2;
	printf("Before a: %d\n", a);
	printf("Before b: %d\n", b);
	ft_swap(&a, &b);
	printf("After a: %d\n", a);
	printf("After b: %d\n", b);
}
*/
