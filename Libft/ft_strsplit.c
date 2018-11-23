/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:14:30 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/23 23:08:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcounter(char const *s, char c)
{
	size_t		i;
	size_t		wordcounter;

	i = 0;
	wordcounter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			wordcounter++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (wordcounter);
}

char	**ft_filling(char const *s, char c, char **tab)
{
	size_t		begin;
	size_t		end;
	size_t		i;

	begin = 0;
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

char	**ft_strsplit(char const *s, char c)
{
	char		**str;

	if (!(str = (char**)malloc(sizeof(char*) * (ft_wordcounter(s, c) + 1))))
		return (NULL);
	return (ft_filling(s, c, str));
}
