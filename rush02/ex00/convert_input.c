/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:04:55 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 23:41:04 by donheo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	convert_input(char ***basic_dict, char *arg)
{
	int	len;
	int	i;
	int	zero;

	i = 0;
	zero = 0;
	len = ft_strlen(arg);
	if (len > 39)
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (len > 0)
	{
		if (len % 3 == 1)
		{
			if (len > 3)
				zero = check_zero(&arg[i + 1]);
			if (arg[i] == '0' && len == 1)
			{
				print_str_with_enter(basic_dict[0][0]);
				break ;
			}
			else if (arg[i] > '0')
			{
				if (len == 1)
					print_str_with_enter(basic_dict[0][arg[i] - '0']);
				else
					print_str(basic_dict[0][arg[i] - '0']);
				if (len > 1)
				{
					if (zero == 1)
						print_str(basic_dict[len - 1][1]);
					else
						print_str_with_enter(basic_dict[len - 1][1]);
				}
			}
			len--;
			i++;
		}
		else if (len % 3 == 2)
		{
			if (len > 4)
				zero = check_zero(&arg[i + 2]);
			if (arg[i] == '1' && arg[i + 1] >= '1')
			{
				if (len == 2)
					print_str_with_enter(basic_dict[1][arg[i + 1] - '0' + 10]);
				else
					print_str(basic_dict[1][arg[i + 1] - '0' + 10]);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 2][1]);
					else
						print_str_with_enter(basic_dict[len - 2][1]);
				}
			}
			else if (arg[i] == '1' && arg[i + 1] == '0')
			{
				if (len == 2)
					print_str_with_enter(basic_dict[1][1]);
				else
					print_str(basic_dict[1][1]);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 2][1]);
					else
						print_str_with_enter(basic_dict[len - 2][1]);
				}
			}
			else
			{
				if (arg[i] >= 0 && len == 2 && arg[i + 1] == '0')
					print_str_with_enter(basic_dict[1][arg[i] - '0']);
				else if (arg[i] >= 0)
					print_str(basic_dict[1][arg[i] - '0']);
				if (arg[i + 1] > '0' && len == 2)
					print_str_with_enter(basic_dict[0][arg[i + 1] - '0']);
				else if (arg[i + 1] > '0')
					print_str(basic_dict[0][arg[i + 1] - '0']);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 2][1]);
					else
						print_str_with_enter(basic_dict[len - 2][1]);
				}
			}
			len = len - 2;
			i = i + 2;
		}
		else if (len % 3 == 0)
		{
			if (arg[i] > '0')
			{
				zero = check_zero(&arg[i + 1]);
				print_str(basic_dict[0][arg[i] - '0']);
				if (zero == 1)
					print_str(basic_dict[2][1]);
				else
					print_str_with_enter(basic_dict[2][1]);
			}
			if (len > 5)
				zero = check_zero(&arg[i + 3]);
			if (arg[i + 1] == '1' && arg[i + 2] == '0')
			{
				if (len == 3)
					print_str_with_enter(basic_dict[1][1]);
				else
					print_str(basic_dict[1][1]);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 3][1]);
					else
						print_str_with_enter(basic_dict[len - 3][1]);
				}
			}
			else if (arg[i + 1] == '1' && arg[i + 2] > '0')
			{
				if (len == 3)
					print_str_with_enter(basic_dict[1][arg[i + 2] - '0' + 10]);
				else
					print_str(basic_dict[1][arg[i + 2] - '0' + 10]);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 3][1]);
					else
						print_str_with_enter(basic_dict[len - 3][1]);
				}
			}
			else if (!(arg[i] == '0' && arg[i + 1] == '0' && arg[i + 2] == '0'))
			{
				if (arg[i + 1] > '0')
					print_str(basic_dict[1][arg[i + 1] - '0']);
				if (arg[i + 2] > '0' && len == 3)
					print_str_with_enter(basic_dict[0][arg[i + 2] - '0']);
				else if (arg[i + 2] > '0')
					print_str(basic_dict[0][arg[i + 2] - '0']);
				if (len > 3)
				{
					if (zero == 1)
						print_str(basic_dict[len - 3][1]);
					else
						print_str_with_enter(basic_dict[len - 3][1]);
				}
			}
			len = len - 3;
			i = i + 3;
		}
	}
}
