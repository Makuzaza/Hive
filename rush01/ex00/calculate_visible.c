/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_visible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:29:18 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:43:22 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	calculate_visible(int *line, int size)
{
	int	visible_count;
	int	max_height;
	int	i;

	visible_count = 1;
	max_height = line[0];
	i = 1;
	while (i < size)
	{
		if (line[i] > max_height)
		{
			visible_count++;
			max_height = line[i];
		}
		i++;
	}
	return (visible_count);
}
