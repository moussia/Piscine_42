/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmottal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:34:25 by mmottal           #+#    #+#             */
/*   Updated: 2017/07/16 08:55:01 by mmottal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] && ((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
		i++;
	return (i);
}

char	*ft_strlowcase(char *str)
{
	if (str[0] >= 65 && str[0] <= 90)
		str[0] = str[0] + 32;
	return (str);
}

char	*ft_strupcase(char *str)
{
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int i2;

	i = 0;
	while (str[i])
	{
		i2 = i;
		if (i == 0 || (str[i - 1] < 48) ||
				(str[i - 1] > 57 && str[i - 1] < 65) || (str[i - 1] > 90
					&& str[i - 1] < 97) || str[i - 1] > 122)
		{
			ft_strupcase(str + i);
			i++;
		}
		while (str[i] && (str[i] < 97 || str[i] > 122) &&
				ft_str_is_alpha(str + i - 1) == 1)
		{
			ft_strlowcase(str + i);
			i++;
		}
		if (i2 == i)
			i++;
	}
	return (str);
}
