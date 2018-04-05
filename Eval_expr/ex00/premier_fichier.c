/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premier_fichier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 07:35:10 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/23 08:31:15 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		puissance(int p)
{
	int a;

	a = 1;
	while (p != 1)
	{
		a = a * 10;
		p--;
	}
	return (a);
}

int		fonction_nb(int n)
{
	int i;

	i = 0;
	if		(n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	long	nombre;
	int		c;
	int		nbc;

	nombre = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nombre = -nombre;
	}
	nbc = fonction_nb(nb);
	while (nbc != 0)
	{
		c = nombre / puissance(nbc);
		ft_putchar(c + '0');
		nombre = nombre - (c * puissance(nbc));
		nbc--;
	}
}

int eval_expr(char *str) /*fonction obligatoire !!!!!!!!!!*/
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (0);
}


int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	}
	return (0);
}
