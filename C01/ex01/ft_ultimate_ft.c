/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:55:27 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 11:51:03 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
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
// 	int number; // Declare an integer variable

// 	int *ptr1 = &number;
// 	int **ptr2 = &ptr1;
// 	int ***ptr3 = &ptr2;
// 	int ****ptr4 = &ptr3;
// 	int *****ptr5 = &ptr4;
// 	int ******ptr6 = &ptr5;
// 	int *******ptr7 = &ptr6;
// 	int ********ptr8 = &ptr7; 

// 	ft_ultimate_ft(&ptr8); // Pass the address of ptr8 to modify it
// 	display(number);
// 	return (0);
// }
