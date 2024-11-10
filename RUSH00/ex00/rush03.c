/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkeskin <nkeskin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:39:36 by nkeskin           #+#    #+#             */
/*   Updated: 2024/01/28 06:39:43 by nkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line_end(int x)
{
	int	counter;

	counter = 0;
	ft_putchar('A');
	while (counter < (x - 2))
	{
		ft_putchar('B');
		counter++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	line_mid(int x, int y)
{
	int	counter;
	int	counter_y;

	counter_y = 0;
	while (y - 2 > counter_y)
	{
		ft_putchar('B');
		counter = 0;
		while ((x - 2) > counter)
		{
			ft_putchar(' ');
			counter++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		counter_y++;
	}
}

void	rush(int x, int y)
{
	int	counter;

	if (x <= 0 || y <= 0)
		return ;
	ft_putchar('A');
	counter = 0;
	while ((x - 2) > counter)
	{
		ft_putchar('B');
		counter++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
	if (y > 2)
		line_mid(x, y);
	if (y > 1)
		line_end(x);
	ft_putchar('\n');
}
