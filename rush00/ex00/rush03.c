/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mora <rde-mora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:28:44 by rde-mora          #+#    #+#             */
/*   Updated: 2024/09/08 16:17:52 by rde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
/*
void	logic00(int x, int y, int col, int row)
{
	if (((col > 1) && (col < x)) && ((row > 1) && (row < y)))
		ft_putchar(' ');
	else if (((row == 1) || (row == y)) && ((col == 1) || (col == x)))
		ft_putchar('o');
	else if (((row == 1) || (row == y)) && ((col > 1) || (col < x)))
		ft_putchar('-');
	else
		ft_putchar('|');
}*/
/*
void	logic01(int x, int y, int col, int row)
{
	if (((col > 1) && (col < x)) && ((row > 1) && (row < y)))
		ft_putchar(' ');
	else if (((row == 1) && (col == 1)) || (((row == y) && (row > 1))
			&& ((col == x) && (col > 1))))
		ft_putchar('/');
	else if (((row == y) && (col == 1)) || ((row == 1) && (col == x)))
		ft_putchar('\\');
	else
		ft_putchar('*');
}*/
/*
void	logic02(int x, int y, int col, int row)
{
	if (((col > 1) && (col < x)) && ((row > 1) && (row < y)))
		ft_putchar(' ');
	else if ((row == 1) && ((col == 1) || (col == x)))
		ft_putchar('A');
	else if ((row == y) && ((col == 1) || (col == x)))
		ft_putchar('C');
	else
		ft_putchar('B');
}*/

void	logic03(int x, int y, int col, int row)
{
	if (((col > 1) && (col < x)) && ((row > 1) && (row < y)))
		ft_putchar(' ');
	else if ((col == 1) && ((row == 1) || (row == y)))
		ft_putchar('A');
	else if ((col == x) && ((row == 1) || (row == y)))
		ft_putchar('C');
	else
		ft_putchar('B');
}
/*
void	logic04(int x, int y, int col, int row)
{
	if (((col > 1) && (col < x)) && ((row > 1) && (row < y)))
		ft_putchar(' ');
	else if (((row == 1) && (col == 1)) || (((row == y) && (row > 1))
			&& ((col == x) && (col > 1))))
		ft_putchar('A');
	else if (((row == y) && (col == 1)) || ((row == 1) && (col == x)))
		ft_putchar('C');
	else
		ft_putchar('B');
}*/

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			logic03(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
