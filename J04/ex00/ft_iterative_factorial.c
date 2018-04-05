/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 06:14:48 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/13 14:30:06 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		resultat = resultat * (nb);
		nb--;
	}
	return (resultat);
}

int main()
{
	printf("%d", ft_iterative_factorial(18));
}
