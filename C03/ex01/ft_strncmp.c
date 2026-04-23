/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:34:46 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/19 11:53:47 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char	s1[] = "abcdefg";
	char	s2[] = "abdjsdh";
	int		result;

	result = ft_strncmp(s1, s2, 2);

	printf("resultado: %d\n", result);

	return (0);
}
*/

/*
#include <stdio.h>
       #include <stdlib.h>
       #include <string.h>

       int
       main(int argc, char *argv[])
       {
           int res;

           if (argc < 3) {
               fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
               exit(EXIT_FAILURE);
           }

           if (argc == 3)
               res = strcmp(argv[1], argv[2]);
           else
               res = strncmp(argv[1], argv[2], atoi(argv[3]));

           if (res == 0) {
               printf("<str1> and <str2> are equal");
               if (argc > 3)
                   printf(" in the first %d bytes\n", atoi(argv[3]));
               printf("\n");
           } else if (res < 0) {
               printf("<str1> is less than <str2> (%d)\n", res);
           } else {
               printf("<str1> is greater than <str2> (%d)\n", res);
           }

           exit(EXIT_SUCCESS);
       }
*/