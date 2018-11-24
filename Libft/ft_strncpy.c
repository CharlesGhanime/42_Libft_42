/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:10:17 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 19:14:50 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/23 13:31:34 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
<<<<<<< HEAD
		dst[i] = '\0';
		i++;
=======
	dst[i] = '\0';
	i++;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	}
	return (dst);
}
