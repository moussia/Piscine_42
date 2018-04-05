/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:07:13 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/27 14:02:08 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_par.h"

int					ft_strlen2(char *str)
{
	int		nb_char;

	nb_char = 0;
	while (*(str + nb_char) != '\0')
		nb_char++;
	return (nb_char);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*cp;

	i = 0;
	while (src[i])
		i++;
	if (!(cp = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*tab;

	i = 0;
	if (!(tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 2))))
		return (0);
	while (i < ac)
	{
		tab[i].size_param = ft_strlen2(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].size_param = 0;
	return (tab);
}
