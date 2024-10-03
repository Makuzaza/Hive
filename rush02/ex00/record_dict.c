/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:07:00 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 21:58:49 by donheo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	check_num(int *arr, char *buff, int *i, int *k)
{
	if (buff[*i] > '0' && buff[*i] <= '9')
		arr[1] = buff[*i] - '0';
	while (buff[*i] != ':')
	{
		if (buff[*i] == '1' && buff[*i + 1] > '0' && buff[*i + 1] <= '9')
		{
			*k = buff[*i + 1] + (10 - arr[1]) - '0';
			(*i)++;
			arr[0]++;
		}
		else
			*k = 0;
		if (buff[*i] >= '0' && buff[*i] <= '9')
			arr[0]++;
		(*i)++;
	}
}

void	process_dict(int file_byte, char *buff, char ***basic_dict)
{
	int	i;
	int	j;
	int	k;
	int	arr[2];

	k = 0;
	arr[1] = 0;
	i = 0;
	while (i < file_byte)
	{
		arr[0] = -1;
		check_num(arr, buff, &i, &k);
		i = i + 2;
		j = 0;
		while (buff[i] != '\n' && i < file_byte + 1)
		{
			basic_dict[arr[0]][arr[1] + k][j] = buff[i];
			i++;
			j++;
		}
		basic_dict[arr[0]][arr[1] + k][j] = '\0';
		i++;
	}
}

void	record_dict(char ***basic_dict)
{
	int		fd;
	int		file_byte;
	char	buff[691];

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	file_byte = read(fd, buff, sizeof(buff));
	if (file_byte == -1)
	{
		write(1, "Dict Error\n", 11);
		close(fd);
		return ;
	}
	process_dict(file_byte, buff, basic_dict);
	close(fd);
}
