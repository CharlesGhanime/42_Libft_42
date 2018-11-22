/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 23:55:57 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/20 03:36:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *r;

	i = 0;
	if (!(r = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		++i;
	}
	return (r);
}
