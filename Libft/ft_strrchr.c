/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:28:32 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 13:08:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t counter;
	size_t compare;

	i = 0;
	counter = 0;
	compare = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			compare++;
			if (s[i] == c && (compare == counter))
				return ((char *)s);
		}
		i++;
	}
	return (NULL);
}
