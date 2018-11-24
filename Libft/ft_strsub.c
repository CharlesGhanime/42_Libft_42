/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 05:35:04 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 19:19:07 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/23 16:56:04 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
<<<<<<< HEAD
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	new = ft_strcpy(new, (char *)s + start);
=======
	if(!(new = (char *)malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	new = ft_strncpy(new, (char *)s + start, len);
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	return (new);
}
