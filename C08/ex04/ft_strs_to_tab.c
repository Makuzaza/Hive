/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:13:04 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 17:13:49 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	free_tab(t_stock_str *tab, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (tab[i].copy != NULL)
			free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	i = 0;
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
		{
			free_tab(result, i);
			return (NULL);
		}
		i++;
	}
	result[i].str = 0;
	return (result);
}

// int	main(void)
// {
// 	int		i;

// 	i = 0;
// 	char		*str[] = {"Hello", "World", "!"};
// 	t_stock_str	*result;
// 	result = ft_strs_to_tab(3, str);
// 	if (result == NULL)
// 	{
// 		printf("Error allocating memory\n");
// 		return (1);
// 	}
// 	while (result[i].str != 0)
// 	{
// 		printf("size: %d\n", result[i].size);
// 		printf("str: %s\n", result[i].str);
// 		printf("copy: %s\n", result[i].copy);
// 		i++;
// 	}
// 	free_tab(result, 3);
// 	return (0);
// }
