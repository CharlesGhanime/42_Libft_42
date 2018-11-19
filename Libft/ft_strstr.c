/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:31:43 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 17:31:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			k = i;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[k]);
		}
		j = 0;
		i = k++;
		i++;
	}
	return (NULL);
}
