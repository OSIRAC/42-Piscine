/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:10:25 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/05 12:46:53 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar("\\");
			ft_putchar(&"0123456789abcdef"[str[i] / 16]);
			ft_putchar(&"0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}
