/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:59:47 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/12 11:05:54 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
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
//     printf("Result: %d\n", ft_strncmp(s1, s2, 5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s3);
//     printf("Result: %d\n", ft_strncmp(s1, s3, 5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s4);
//     printf("Result: %d\n", ft_strncmp(s1, s4, 5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s5);
//     printf("Result: %d\n", ft_strncmp(s1, s5, 5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s6);
//     printf("Result: %d\n", ft_strncmp(s1, s6, 5));

//     printf("String 1: %s\n", s1);
//     printf("String 2: %s\n", s7);
//     printf("Result: %d\n", ft_strncmp(s1, s7, 5));

//     return 0;
// }
