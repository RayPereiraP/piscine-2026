/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:37:26 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/08 14:13:37 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
/*
int main ()
{
	int number1 = 10, number2 = 20;
	printf("Antes: number1 = %d, number2 = %d\n", number1, number2);
	
	ft_swap(&number1, &number2);

	printf("Depois: number1 = %d, number2 = %d\n", number1, number2);
	return 0;
}
*/