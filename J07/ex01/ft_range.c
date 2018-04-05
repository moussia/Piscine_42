/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:12:32 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/23 18:43:48 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
