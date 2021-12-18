/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:40:39 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/16 15:58:17 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;
	char	*str;
	int		z;

	z = 1;
	while (z < argc)
	{	
		str = argv[z];
		a = 0;
		while (str[a] != '\0')
		{
			write(1, &str[a], 1);
			a++;
		}
		write(1, "\n", 1);
		z++;
	}
}
