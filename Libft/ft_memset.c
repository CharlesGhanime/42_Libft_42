/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:04:35 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 18:10:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*s;
	unsigned char	ch;

	if (str == NULL)
		return (NULL);
	s = (char *)str;
	ch = (unsigned char)c;
	while (n--)
		*(s++) = ch;
	return (str);
}
