/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:05:06 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/22 21:05:07 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>

void	convert_input(char ***basic_dict, char *arg);
void	free_dict(char ***basic_dict);
void	ft_memset(char *arr, char c, int size);
int		ft_strlen(char *str);
int		is_number(const char *str);
void	malloc_dict(char ****basic_dict);
void	print_str_with_enter(char *str);
void	print_str(char *str);
void	record_dict(char ***basic_dict);
int		check_zero(char *str);

#endif
