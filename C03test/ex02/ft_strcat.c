/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:38:17 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/19 11:53:58 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "enquanto";
	char	src[] = "existem";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/

/*
   char *
           strncat(char *dest, const char *src, size_t n)
           {
               size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
           }

*/