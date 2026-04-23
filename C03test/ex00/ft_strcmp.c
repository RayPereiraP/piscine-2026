/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:12:47 by rayperei          #+#    #+#             */
/*   Updated: 2026/04/17 16:53:39 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char 	s1[] = "abcdef";
	char	s2[] = "abdjhf";
	int		result;

	result = ft_strcmp(s1, s2);

	if (result == 0)
		printf("strings iguais\n");
	else if (result < 0)
		printf("s1 é menor que s2 (%d)\n", result);
	else
		printf("s1 é maior que s2 (%d)\n", result);

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