/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:06:44 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 21:13:38 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	malloc_dict(char ****basic_dict)
{
	int	i;
	int	j;

	*basic_dict = (char ***)malloc(sizeof(char **) * 39);
	i = 0;
	while (i < 39)
	{
		(*basic_dict)[i] = (char **)malloc(sizeof(char *) * 21);
		j = 0;
		while (j < 21)
		{
			(*basic_dict)[i][j] = (char *)malloc(sizeof(char) * 13);
			ft_memset((*basic_dict)[i][j], '-', 12);
			j++;
		}
		i++;
	}
}
