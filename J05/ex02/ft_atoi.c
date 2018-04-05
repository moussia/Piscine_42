/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 13:24:11 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/13 16:57:40 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int negative;
	int nombre;

	i = 0;
	negative = 1;
	nombre = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r') ||
			(str[i] == '\f') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nombre = nombre * 10;
		nombre += ((int)str[i] - 48);
		i++;
	}
	return (nombre * negative);
}
