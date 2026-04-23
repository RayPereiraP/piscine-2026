/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:04:16 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/16 12:13:46 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "OOI";
	//char str[] = "ABC";
	//char str[] = "abc";
	//char str[] = "A1B";
	//char str[] = "";
	int result;

	result = ft_str_is_uppercase(str);
	
	if (result == 1)
		printf("1\n");
	else
		printf("0\n");

	return (0);
}
*/