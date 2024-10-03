/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:54:02 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/25 15:09:05 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}

// int main(void)
// {
// 	int *range;
// 	int size;
// 	int i;

// 	size = ft_ultimate_range(&range, 5, 10);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%i\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// 	return 0;
// }