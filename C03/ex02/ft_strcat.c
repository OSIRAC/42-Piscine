/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:29:40 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/06 13:48:23 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[i])
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (dest);
}
