/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:01:29 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 17:34:57 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/24 13:17:42 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
<<<<<<< HEAD
	unsigned char	*str;
=======
	unsigned char			*str;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
