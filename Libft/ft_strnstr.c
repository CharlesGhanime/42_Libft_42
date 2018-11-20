/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:30:42 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 11:50:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (*str == '\0' && *to_find == '\0')
		return ((char *)str);
	while (i < len)
	{
		if (str[i] == to_find[j])
			k = i;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[k]);
		}
		j = 0;
		i = k++;
		i++;
	}
	return (NULL);
}
