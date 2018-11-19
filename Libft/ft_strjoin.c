/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:43:02 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 17:25:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i != '\0')
	{
		new[i] = s1[i] && s2[i];
		i++;
	}
	return (new);
}
