/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:00:59 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 21:57:31 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*cdst;
	char			*csrc;
	unsigned char	ch;
	size_t			i;

	cdst = (char *)dst;
	csrc = (char *)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (csrc[i + 1] == ch)
			return (dst);
		else
			cdst[i] = csrc[i];
		i++;
	}
	return (NULL);
}
