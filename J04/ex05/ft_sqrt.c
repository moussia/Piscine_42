/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:57:03 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/10 15:20:41 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long x;
	long a;

	if (nb <= 0)
	{
		return (0);
	}
	x = nb;
	a = (x + (nb / x)) / 2;
	while (a < x)
	{
		x = a;
		a = (x + (nb / x)) / 2;
	}
	if (a * a != nb)
	{
		return (0);
	}
	return (a);
}
