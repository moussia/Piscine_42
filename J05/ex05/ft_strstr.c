/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:56:37 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/13 16:30:52 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		tmp = i;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[tmp]);
			i++;
			j++;
		}
		j = 0;
		i = tmp + 1;
	}
	return (0);
}
