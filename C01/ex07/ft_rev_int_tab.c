/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:49:57 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/01 14:01:16 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_swap(int *nb, int *rm)
{
	int	temp;

	temp = *nb;
	*nb = *rm;
	*rm = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		my_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}
