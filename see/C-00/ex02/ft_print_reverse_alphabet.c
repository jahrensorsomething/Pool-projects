/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:18:04 by jahrens           #+#    #+#             */
/*   Updated: 2021/11/30 17:28:40 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/* ASCII a = 97
 * ASCII z = 122 */

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 122;
	while (a >= 97)
	{
		write(1, &a, 1);
		a--;
	}
}
//int	main()
//{
//	ft_print_reverse_alphabet();
//	return(0);
//}
