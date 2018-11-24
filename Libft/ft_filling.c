/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filling.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:53:57 by cghanime          #+#    #+#             */
<<<<<<< HEAD:Libft/ft_filling.c
/*   Updated: 2018/11/24 17:40:01 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/23 23:07:28 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470:Libft/ft_filling.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_filling(char const *s, char c, char **tab)
{
	size_t begin;
	size_t end;
	size_t i;

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
<<<<<<< HEAD:Libft/ft_filling.c
			end++;
=======
			end ++;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470:Libft/ft_filling.c
		if (end - begin != 0)
			tab[i++] = ft_strndup((char *)s + begin, end - begin);
	}
	tab[i] = NULL;
	return (tab);
}
