/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:59:28 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 16:45:49 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *src, unsigned int n)
{
	size_t		i;
	char		*dest;

	i = 0;
	while (src[i] && i < n)
		i++;
	n = i;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
