/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:54:39 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/11 14:47:43 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
// 	printf("%d\n", ft_str_is_printable("Hello World!"));  
// 	printf("%d\n", ft_str_is_printable("Hello\tWorld!"));
// 	printf("%d\n", ft_str_is_printable(""));
// 	printf("%d\n", ft_str_is_printable("Hello\nWorld"));
// 	return 0;
// }