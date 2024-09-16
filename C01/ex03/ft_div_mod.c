/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:34:52 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/10 11:55:36 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
// 	int a;
// 	int b;
// 	int div;   // Declare an integer variable to store the division
// 	int mod;   // Declare an integer variable to store the modulus
// 	int *pdiv; // Declare a pointer to an integer to store the address of div
// 	int *pmod; // Declare a pointer to an integer to store the address of mod

// 	a = 42;
// 	b = 2;
// 	div = 0; // Initialize div to 0
// 	mod = 0;
// 	pdiv = &div; // Store the address of div in pdiv
// 	pmod = &mod; // Store the address of mod in pmod

// 	ft_div_mod(a, b, pdiv, pmod); // Pass the addresses of div and mod
// 	display(div);
// 	ft_putchar('\n');
// 	display(mod);
// 	return (0);
// }
