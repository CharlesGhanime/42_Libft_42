/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:29:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 11:40:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len= 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		src_len = src_len + size;
	else
		src_len = src_len + dst_len;
	while (src[i] != '\0' && dst_len + 1 < size)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (src_len);
}
	/*dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len + src_len  >= total_len)
		return (dst_len + src_len);
	ft_memcpy(dst + dst_len, src, src_len + 1);
	return (dst_len + src_len);
}*/
		
	/*while (dti ='0)	+;
	j = 0;
	while (j <= srcsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstsize + srcsize + 1);
}*/

int main(void)
{
	char dst[100] = "saluttotototo";
	char dst_1[100] = "saluttotototo";

	printf("%zu |%s|\n", strlcat(dst, "coucou", 7), dst);
	printf("%zu |%s|\n", ft_strlcat(dst_1, "coucou", 7), dst_1);
	return (0);
}
