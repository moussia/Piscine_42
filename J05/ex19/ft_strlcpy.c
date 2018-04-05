/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 08:55:27 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/16 08:55:35 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (src[i])
		i++;
	while (size > 1)
	{
		dest[n] = src[n];
		n++;
		size--;
	}
	dest[n] = '\0';
	return (i);
}
