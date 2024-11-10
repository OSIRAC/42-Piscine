/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:12:51 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/01 13:49:09 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_swap(int *nb, int*rm)
{
	int	temp;

	temp = *nb;
	*nb = *rm;
	*rm = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				my_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
