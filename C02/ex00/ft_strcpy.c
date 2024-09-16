/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:00:25 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/11 14:46:36 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <string.h> // for strcpy and strlen

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
//     char src[] = "hello";
//     char dest[6] = "world";

//     // Using your ft_strcpy
//     write(1, dest, strlen(dest));
//     write(1, "\n", 1); 
//     ft_strcpy(dest, src);
//     write(1, dest, strlen(dest));
//     write(1, "\n", 1);

//     // Using the standard strcpy
//     strcpy(dest, src);
//     write(1, dest, strlen(dest));
//     write(1, "\n", 1);

//     return 0;
// }