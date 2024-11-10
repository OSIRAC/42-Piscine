/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:59:53 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/13 13:24:21 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*number;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	number = (int *)malloc(sizeof(int) * (max - min));
	if (number == NULL)
	{
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		number[i] = min + i;
		i++;
	}
	return (number);
}
