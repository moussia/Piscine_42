/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 04:08:01 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/20 09:51:34 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		taille;
	char	tmp;

	taille = 0;
	i = 0;
	while (str[taille])
	{
		taille++;
	}
	while (i < taille / 2)
	{
		tmp = str[taille - (i + 1)];
		str[taille - (i + 1)] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
