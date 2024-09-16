/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:38:55 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 11:54:04 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	display(int nbr)
// {
// 	int	first;
// 	int	second;

// 	if (nbr < 0)
// 	{
// 		nbr = - nbr;
// 	}

// 	if (nbr > 9)
// 	{
// 		first = nbr / 10;
// 		second = nbr % 10;
// 		ft_swap(&first, &second); // Swap the values of first and second
// 		ft_putchar(first + 48);
// 		ft_putchar(second + 48);
// 	}
// 	else
// 	{
// 		ft_putchar('0');
// 		ft_putchar(nbr + 48);
// 	}
// }

// int	main(void)
// {
// 	int	number;

// 	number = 42;
// 	display(number);
// 	ft_putchar('\n');
// 	return (0);
// }
