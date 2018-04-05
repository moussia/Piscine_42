/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 20:41:05 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/20 10:25:47 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int aux;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = aux;
			i = 0;
		}
		else
			i++;
	}
}
