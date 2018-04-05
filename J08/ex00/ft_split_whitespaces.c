/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:21:59 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/23 16:27:49 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_nbwords(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 11)))
		i++;
	if (str[i] != '\0')
		j++;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 11))
		{
			while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 11))
				i++;
			if (str[i] != '\0')
				j++;
			else
				return (j);
		}
		i++;
	}
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] > 32 && src[i] <= 126)
		i++;
	if (!(tmp = malloc(sizeof(tmp) * i)))
		return (NULL);
	while (j < i)
	{
		tmp[j] = src[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char*) * ft_nbwords(str) + 1)))
		return (NULL);
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 11) || str[i] == ' ')
			i++;
		else
		{
			tab[j] = ft_strdup(str + i);
			i += ft_strlen(tab[j]);
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
