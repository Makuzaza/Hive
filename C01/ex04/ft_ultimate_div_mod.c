/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:26:33 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 12:03:14 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// void	display(int nbr)
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
// 	int a = 22;
// 	int b = 2;
// 	int *pa = &a;
// 	int *pb = &b;

// 	ft_ultimate_div_mod(pa, pb);
// 	display(a);
// 	ft_putchar('\n');
// 	display(b);
// 	return (0);
// }
