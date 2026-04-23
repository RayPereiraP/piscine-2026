/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 08:11:31 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/09 13:04:39 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		write(1, &str[r], 1);
		r++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = "teste do teste";
	ft_putstr(str);
	return (0);
}
*/