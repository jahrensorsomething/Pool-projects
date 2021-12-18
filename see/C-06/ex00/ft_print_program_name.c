/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahrens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:40:01 by jahrens           #+#    #+#             */
/*   Updated: 2021/12/16 15:57:55 by jahrens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		n;
	char	*str;

	n = 0;
	str = argv[0];
	if (argc)
	{
		while (str[n] != '\0')
		{
			write(1, &str[n], 1);
			n++;
		}
		write(1, "\n", 1);
	}
	return (n);
}
