/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:47:57 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/11 15:16:35 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // For printf

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str1[] = "hello world!";
// 	char str2[] = "HIve";
// 	char str3[] = "12345";
// 	char str4[] = "HELLO WORLD!";

// 	printf("%s\n", ft_strlowcase(str1));
// 	printf("%s\n", ft_strlowcase(str2));
// 	printf("%s\n", ft_strlowcase(str3));
// 	printf("%s\n", ft_strlowcase(str4));

// 	return 0;
// }