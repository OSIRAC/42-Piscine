/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:04:57 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/13 16:55:51 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	bound = max - min;
	*range = malloc(bound * sizeof(int));
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	index = 0;
	while (index < bound)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (bound);
}
