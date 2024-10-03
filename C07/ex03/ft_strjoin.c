/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:28:32 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/25 16:35:19 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_len++;
			j++;
		}
		i++;
	}
	j = 0;
	while (sep[j] != '\0')
	{
		j++;
	}
	total_len += j * (size - 1);
	return (total_len);
}

void	copy_str(char *dest, char *src, int *index)
{
	while (*src != '\0')
	{
		dest[(*index)++] = *src++;
	}
}

void	add_separator(char *dest, char *sep, int *index)
{
	while (*sep != '\0')
	{
		dest[(*index)++] = *sep++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		total_len;
	char	*str;

	total_len = ft_calculate_total_length(size, strs, sep);
	str = (char *)malloc(total_len + 1);
	i = 0;
	k = 0;
	while (i < size)
	{
		copy_str(str, strs[i], &k);
		if (i < size - 1)
			add_separator(str, sep, &k);
		i++;
	}
	str[k] = '\0';
	return (str);
}

// int main()
// {
//     char *strs[] = {"Hello", "World", "!"};
//     char *sep = " ";
//     char *str;

//     str = ft_strjoin(3, strs, sep);
//     printf("%s\n", str);
//     free(str);

//     return 0;
// }