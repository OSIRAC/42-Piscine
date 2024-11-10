/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:11:03 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/13 17:02:01 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str1)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		i++;
	}
	return (i);
}

int	sizestr(char **str, int size, char *sep)
{
	int	toplam;
	int	i;
	int	k;

	toplam = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			k = 0;
			while (str[i][k])
			{
				k++;
				toplam++;
			}
			i++;
		}
		return ((str_len(sep) * (size - 1) + toplam + 1));
	}
	else
	{
		return (1);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		c;
	int		j;

	result = (char *)malloc(sizestr(strs, size, sep) * sizeof(char));
	if (size <= 0 || !strs || !sep)
		return (result);
	if (!result)
		return (0);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			result[c++] = sep[j++];
		i++;
	}
	result[c] = '\0';
	return (result);
}
