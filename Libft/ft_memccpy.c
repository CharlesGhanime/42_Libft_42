/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:00:59 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 17:33:45 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/24 13:38:31 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
<<<<<<< HEAD
	unsigned char	*cdst;
	unsigned char	*csrc;
=======
	unsigned char			*cdst;
	unsigned char			*csrc;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	size_t			i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		cdst[i] = csrc[i];
		if (cdst[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
<<<<<<< HEAD
		i++;
=======
			i++;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	}
	return (NULL);
}
