/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:58:54 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/15 18:42:07 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	char_to_int(char c);

int	parse_input(char *input, int *constraints)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			if (j >= 16)
				return (0);
			constraints[j] = char_to_int(input[i]);
			j++;
		}
		else if (input[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (j == 16);
}
