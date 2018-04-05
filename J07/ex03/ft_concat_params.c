/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:53:07 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/23 19:23:55 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		n;
	int		i;
	int		nb;
	char	aux;

	nb = 0;
	i = 0;
	while (*(str + nb) != '\n')
		nb++;
	n = nb - 1;
	while (n >= nb / 2)
	{
		aux = str[i];
		str[i] = str[n];
		str[n] = aux;
		n--;
		i++;
	}
	return (str);
}

int		ft_size(int argc, char **argv)
{
	int i;
	int size;

	size = argc;
	while (argc != 1)
	{
		i = 0;
		while (argv[argc - 1][i++])
			size++;
		argc--;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;
	int		size;
	int		size2;

	size = ft_size(argc, argv);
	size2 = size;
	str = (char*)malloc(sizeof(*str) * (size + 10));
	size--;
	while (argc != 1)
	{
		i = 0;
		str[size - 1] = '\n';
		size--;
		while (argv[argc - 1][i])
		{
			str[size - 1] = argv[argc - 1][i];
			size--;
			i++;
		}
		ft_strrev(str + size);
		argc--;
	}
	str[size2 - 2] = '\0';
	return (str);
}
