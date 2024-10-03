/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:25:51 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/25 15:09:01 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// int main(void)
// {
// 	int *range = ft_range(5, 10);
// 	int i = 0;
// 	while (i < 5)
// 	{
// 		printf("%i\n", range[i]);
// 		i++;
// 	}
// 	return 0;
// }