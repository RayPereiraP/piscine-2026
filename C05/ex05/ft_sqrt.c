/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:09:22 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/22 18:46:45 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int result;

	result = ft_sqrt(-4);
	printf("a raiz de -4 é = %d\n", result);
	return (0);
}
*/