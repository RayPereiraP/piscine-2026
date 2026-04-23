/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:55 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/09 10:31:34 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
int main()
{
	int a = 10;
	int b = 20;

	ft_ultimate_div_mod(&a, &b);

	printf("O resultado da divisão está no a: %d\n", a);
	printf("O resultado do resto está no b: %d\n", b);

	return 0;
}
*/