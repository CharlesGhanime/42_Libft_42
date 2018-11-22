/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 06:05:09 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 05:01:16 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[x] = str[x] - 32;
		else if ((str[x] >= 32 && str[x] <= 47) || (str[x] >= 58
		&& str[x] <= 64) || (str[x] >= 91 && str[x] <= 96) ||
				(str[x] >= 123 && str[x] <= 126))
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
				str[x + 1] = str[x + 1] - 32;
		}
		x++;
	}
	return (str);
}
