/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:32:06 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:43:52 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_visibility(int grid[4][4], int *constraints);
int	is_valid(int grid[4][4], int row, int col, int num);
int	solve_grid(int grid[4][4], int *constraints, int row, int col);

int	solve_grid(int grid[4][4], int *constraints, int row, int col)
{
	int	num;

	if (row == 4)
	{
		return (check_visibility(grid, constraints));
	}
	if (col == 4)
		return (solve_grid(grid, constraints, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_grid(grid, constraints, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
