/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:46:22 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 12:01:23 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		i++;
	}
	return (i);
}

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void display(int nbr)
// {
// 	if (nbr < 0)
// 	{
// 		ft_putchar('-');
// 		nbr = -nbr;
// 	}

// 	if (nbr >= 10)
// 	{
// 		display(nbr / 10); // Recursive call to handle all but the last digit
// 	}
// 	ft_putchar((nbr % 10) + 48); // Print the last digit
// }

// int main(void)
// {
// 	char str[] = "Hello, How are you?";
// 	int length = ft_strlen(str);
// 	display(length);
// 	return 0;
// }
