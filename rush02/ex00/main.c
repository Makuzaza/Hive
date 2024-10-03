/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:05:12 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 21:24:43 by donheo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	***basic_dict;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	malloc_dict(&basic_dict);
	record_dict(basic_dict);
	if (argc == 2)
	{
		if (!is_number(argv[1]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		convert_input(basic_dict, argv[1]);
	}
	free_dict(basic_dict);
	return (0);
}
