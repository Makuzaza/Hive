/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:53:56 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:49:23 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	display_grid(int grid[4][4]);
int	parse_input(char *input, int *constraints);
int	solve_grid(int grid[4][4], int *constraints, int row, int col);

int	main(int argc, char **argv)
{
	int	grid[4][4] = {0};
	int	constraints[16];

	if (!parse_input(argv[1], constraints))
	{
		ft_putstr("Error, please write 16 digits separated by space\n");
		return (1);
	}
	if (argc != 2)
	{
		ft_putstr("Error, please write only one argument\n");
		return (1);
	}
	if (!solve_grid(grid, constraints, 0, 0))
	{
		ft_putstr("Error, no solution is found\n");
	}
	else
		display_grid(grid);
	return (0);
}
