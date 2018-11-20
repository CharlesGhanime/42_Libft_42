/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:07:50 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 19:29:26 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	char	*tab;
	size_t	i;

	cdst = (char *)dst;
	csrc = (char *)src;
	tab = NULL;
	i = 0;
	while (i < len)
	{
		tab[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = tab[i];
		i++;
	}
	return (cdst);
}
