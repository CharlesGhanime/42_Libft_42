/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:29:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 17:25:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t srcsize;

	srcsize = dstsize - ft_strlen(dst) - 1;
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (j <= srcsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
