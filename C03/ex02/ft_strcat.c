/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:59:50 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/12 11:07:35 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
//     char dest[50] = "Hello, "; // Ensure the array has enough space
//     char src[] = "friend!";

//     printf("Before concatenation: %s\n", dest);
//     ft_strcat(dest, src);
//     printf("After concatenation: %s\n", dest);

//     return 0;
// }