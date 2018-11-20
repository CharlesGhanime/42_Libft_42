/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:14:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/20 19:30:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wordcount(char const *s, char c)
{
	size_t		i;
	size_t		wordcount;

	i = 0;
	wordcount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			wordcount++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (wordcount);
}

static	char	**ft_filling(char const *s, char c, char **tab)
{
	size_t		begin;
	size_t		end;
	size_t		i;

	end = 0;
	i = 0;
	while (s[end])
	{
		begin = end;
		while (s[begin] && s[begin] == c)
			begin++;
		end = begin;
		while (s[end] && s[end] != c)
			end++;
		if (end - begin != 0)
			tab[i++] = ft_strndup((char *)s + begin, end - begin);
	}
	tab[i] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;

	if (!(str = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	return (ft_filling(s, c, str));
}
