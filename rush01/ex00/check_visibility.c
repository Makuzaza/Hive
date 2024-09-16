/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:30:18 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:43:22 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	calculate_visible(int *line, int size);

int	check_visibility(int grid[4][4], int *constraints)
{
	int	line[4];
	int	col;
	int	i;
	int	row;

	col = 0;
	while (col < 4)
	{
		i = 0;
		while (i < 4)
		{
			line[i] = grid[i][col];
			i++;
		}
		if (calculate_visible(line, 4) != constraints[col])
			return (0);
		i = 0;
		while (i < 4)
		{
			line[i] = grid[4 - i - 1][col];
			i++;
		}
		if (calculate_visible(line, 4) != constraints[4 + col])
			return (0);
		col++;
	}
	row = 0;
	while (row < 4)
	{
		i = 0;
		while (i < 4)
		{
			line[i] = grid[row][i];
			i++;
		}
		if (calculate_visible(line, 4) != constraints[8 + row])
			return (0);
		i = 0;
		while (i < 4)
		{
			line[i] = grid[row][4 - i - 1];
			i++;
		}
		if (calculate_visible(line, 4) != constraints[12 + row])
			return (0);
		row++;
	}
	return (1);
}
