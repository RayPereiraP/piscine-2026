/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:59:05 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/21 12:46:55 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	arg;
	int	letter;

	arg = 1;
	while (arg < argc)
	{
		letter = 0;
		while (argv[arg][letter] != '\0')
		{
			write(1, &argv[arg][letter], 1);
			letter++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
