/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:31:27 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 17:31:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*new;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(s));
	if (!new)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			new[i] = s[i];
		i++;
	}
	return (new);
}
