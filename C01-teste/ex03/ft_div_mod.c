/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:16:37 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/08 21:08:23 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 6;

	ft_div_mod(a, b, &div, &mod);

	printf("Divisão: %d\n", div);
	printf("Resto: %d\n", mod);

	return (0);
}
*/