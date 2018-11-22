/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:36:39 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 14:16:26 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (str[x] == to_find[y])
			z = x;
		while (str[x] == to_find[y])
		{
			x++;
			y++;
			if (to_find[y] == '\0')
				return (&str[z]);
		}
		y = 0;
		x = z++;
		x++;
	}
	return (0);
}
