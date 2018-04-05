/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:47:19 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/10 15:15:05 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb == 1 && nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
	else
		return (0);
}
