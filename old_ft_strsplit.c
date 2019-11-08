/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:14:30 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 03:58:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

char	**ft_strsplit(char const *s, char c)
{
	char		**str;

	if (!s || !(str = (char**)malloc(sizeof(char*) *
	(ft_wordcounter(s, c) + 1))))
		return (NULL);
	str = ft_filling(s, c, str);
	return (str);
}
