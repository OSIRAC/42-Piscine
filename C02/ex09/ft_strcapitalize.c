/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:52:56 by oislamog          #+#    #+#             */
/*   Updated: 2024/02/05 12:50:54 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 1;
	control = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= control * 32;
			control = 0;
		}
		else if (str[i] == 32 && ('a' <= str[i + 1] && str[i + 1] <= 'z'))
		{
			control = 1;
		}
		i++;
	}
	return (str);
}
