/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:04:58 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 21:31:36 by donheo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_dict(char ***basic_dict)
{
	int	i;
	int	j;

	i = 36;
	while (i >= 0)
	{
		j = 19;
		while (j >= 0)
		{
			free(basic_dict[i][j]);
			j--;
		}
		free(basic_dict[i]);
		i--;
	}
	free(basic_dict);
}
