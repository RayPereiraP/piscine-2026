/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:22:17 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/15 19:34:16 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "oi";
	int		result;

	result = ft_str_is_lowercase(str);

	if (result == 1)
		printf("1\n");
	else 
		printf("0\n");
	
	return (0);
}
*/