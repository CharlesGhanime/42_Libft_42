/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:02:06 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 15:04:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			i;

	cs1 = NULL;
	cs2 = NULL;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1 == '\0' && cs2 == '\0')
			return (0);
		else if (cs1 == cs2)
			return (0);
		else
			return (cs1 - cs2);
		i++;
	}
	return (0);
}
