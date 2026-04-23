/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:54:29 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/20 16:06:58 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	char	str[] = "Hello World";
	int		result;

	result = ft_strlen (str);
	printf("tamanho: %d\n", result);
	
	return (0);
}
*/