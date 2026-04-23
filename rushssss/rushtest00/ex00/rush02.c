/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malima-p <malima-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 14:35:49 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/04 18:25:01 by malima-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	l;
	int	c;

	c = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Formato inválido!", 18);
	}
	while (c++ < y)
	{
		l = 0;
		while (l++ < x)
		{
			if (c == 0 && (l == 0 || l == x - 1))
				ft_putchar('A');
			else if (c == y - 1 && (l == 0 || l == x - 1))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
