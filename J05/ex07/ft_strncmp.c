/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:04:02 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/16 08:54:20 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	s1_[n];
	unsigned char	s2_[n];

	i = 0;
	if (n == 0)
		return (0);
	s1_[i] = s1[i];
	s2_[i] = s2[i];
	while (s1_[i] == s2_[i] && s1_[i] != '\0' && i + 1 < n)
	{
		i++;
		s1_[i] = s1[i];
		s2_[i] = s2[i];
	}
	return (s1_[i] - s2_[i]);
}
