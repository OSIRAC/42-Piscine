/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:24:41 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/08 10:13:14 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	rest;

	i = 0;
	sign = 1;
	rest = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9' && str[i])
	{
		rest = rest * 10;
		rest = rest + str[i] - '0';
		i++;
	}
	return (sign * rest);
}
