/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:15:07 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 11:49:44 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
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
// 		nbr = -nbr; // Make the number positive
// 	}

// 	if (nbr >= 10)
// 	{
// 		display(nbr / 10); // Recursive call to handle all but the last digit
// 	}
// 	ft_putchar((nbr % 10) + 48); // Print the last digit
// }

// int main(void)
// {
// 	int number; // Declare an integer variable

// 	ft_ft(&number);	 // Pass the address of number to modify it
// 	display(number); // Display the value of number (which should now be 42)
// 	return (0);
// }
