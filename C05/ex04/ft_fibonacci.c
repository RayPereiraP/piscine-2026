/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:59:23 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/22 18:07:50 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main(void)
{
	int result;
	
	result = ft_fibonacci(4);
	printf("Fibonacci de 4 = %d\n", result);
	return (0);
}*/
/*
Fibonacci (cada número = soma dos 2 anteriores)

index:  0   1   2   3   4   5   6    7    8    9    10
value:  0   1   1   2   3   5   8   13   21   34   55

explicação:
0  = base
1  = base
1  = 0 + 1
2  = 1 + 1
3  = 2 + 1
5  = 3 + 2
8  = 5 + 3
13 = 8 + 5
21 = 13 + 8
34 = 21 + 13
55 = 34 + 21

visual:
0 → 1 → 1 → 2 → 3 → 5 → 8 → 13 → 21 → 34 → 55
     ↘  ↗  ↘  ↗  ↘  ↗  ↘   ↗   ↘   ↗
      soma dos dois anteriores
*/
