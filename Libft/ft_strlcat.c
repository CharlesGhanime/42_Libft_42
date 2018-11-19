/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:29:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 21:30:31 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
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
	return (dstsize + srcsize + 1);
}

int main(void)
{
	char dst[100] = "salut";
	char dst_1[100] = "salut";

	printf("%zu |%s|\n", strlcat(dst, "coucou", 6), dst);
	printf("%zu |%s|\n", ft_strlcat(dst_1, "coucou", 7), dst_1);
	return (0);
}
