/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:59:38 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/12 11:02:33 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
//     char *s1 = "Hello";
//     char *s2 = "Hello";
//     char *s3 = "Hello!";
//     char *s4 = "Hello, World!";
//     char *s5 = "Hello123";
//     char *s6 = "12345";
//     char *s7 = "";

//     // Test the function with different strings
//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s2);
//     printf("Result: %d\n", ft_strcmp(s1, s2));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s3);
//     printf("Result: %d\n", ft_strcmp(s1, s3));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s4);
//     printf("Result: %d\n", ft_strcmp(s1, s4));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s5);
//     printf("Result: %d\n", ft_strcmp(s1, s5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s6);
//     printf("Result: %d\n", ft_strcmp(s1, s6));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s7);
//     printf("Result: %d\n", ft_strcmp(s1, s7));

//     return 0;
// }