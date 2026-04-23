/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:41:19 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/22 17:52:41 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial (nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	int	result;

	result = ft_recursive_factorial(5);
	printf("Fatorial de 5 = %d\n", result);
	return (0);
}*/
