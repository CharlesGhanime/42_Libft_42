/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 03:18:07 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/17 23:45:12 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*ptr;

	x = 0;
	if (!(ptr = malloc(sizeof(char) * ft_strlen(src))))
		return (NULL);
	while (src[x] != '\0')
	{
		ptr[x] = src[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
