/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 14:35:49 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/05 18:59:48 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0 || y <= 0)
		return ;
	c = 0;
	while (c < y)
	{
		l = 0;
		while (l < x)
		{
			if ((c == 0 && (l == 0 || l == x - 1)))
				ft_putchar('A');
			else if ((c == y - 1 && (l == 0 || l == x - 1)))
				ft_putchar('C');
			else if (c == 0 || c == y - 1 || l == 0 || l == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
