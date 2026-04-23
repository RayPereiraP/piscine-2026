/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:11:13 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/15 19:33:33 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str[] = "12345678";
	//char str[] = "123a5678"; - a saida deve ser 0
	int		result;

	result = ft_str_is_numeric(str);
	
	if (result == 1)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);

	return (0);
}
*/