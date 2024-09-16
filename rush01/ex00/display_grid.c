/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:33:31 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:47:25 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	display_grid(int grid[4][4])
{
	char	buf[2];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			buf[0] = grid[i][j] + '0';
			buf[1] = ' ';
			write(1, &buf, 2);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
