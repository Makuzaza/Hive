/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:28:02 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/26 14:12:48 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc_sorted;
	int	desc_sorted;

	asc_sorted = 1;
	desc_sorted = 1;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			asc_sorted = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			desc_sorted = 0;
		i++;
	}
	return (asc_sorted || desc_sorted);
}
