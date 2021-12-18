/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:41:12 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/16 15:57:38 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		a;
	int		z;

	z = argc - 1;
	while (z > 0)
	{
		str = argv[z];
		a = 0;
		while (str[a] != '\0')
		{
			write(1, &str[a], 1);
			a++;
		}
		write(1, "\n", 1);
		z--;
	}
}