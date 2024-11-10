/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:27:40 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/06 16:34:35 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[i] && i < nb)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (dest);
}
