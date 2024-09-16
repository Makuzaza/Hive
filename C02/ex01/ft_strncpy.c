/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:15:46 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/11 14:47:43 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h> // for standard strncpy

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main()
// {
//     char src[] = "hello"; 
//     char dest[10] = "world";
//     char dest1[10] = "wrong";

//     // Using your ft_strncpy with 'n' set to 8
//     write(1, dest, 8);
//     write(1, "\n", 1); // Write a newline
//     ft_strncpy(dest, src, 8);
//     write(1, dest, 8);
//     write(1, "\n", 1); // Write a newline

//     // Using the standard strncpy with 'n' set to 8 for comparison
//     write(1, dest1, 8);
//     write(1, "\n", 1);  // Write a newline
//     strncpy(dest1, src, 8);
//     write(1, dest1, 8);
//     write(1, "\n", 1);  // Write a newline

//     return 0;
// }
