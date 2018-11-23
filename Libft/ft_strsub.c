/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:35:04 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/23 16:56:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if(!(new = (char *)malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	new = ft_strncpy(new, (char *)s + start, len);
	return (new);
}
