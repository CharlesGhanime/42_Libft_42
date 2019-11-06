/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:14:30 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/04 19:12:46 by cghanime         ###   ########.fr       */
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
/*
int main(int argc, char **argv)
{
	char **str;
	int i;
	int j;

	i = 1;
	j = 0;
	str = NULL;
	str = (char **)malloc(sizeof(char *) * argc);
	printf("argv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);
	printf("argv[2] = %s\n", argv[2]);
	printf("argv[3] = %s\n", argv[3]);
	printf("argv[4] = %s\n", argv[4]);
	if (argc > 1)
	{
		while (i < argc)
		{
			str = ft_strsplit(argv[i], ' ');
			printf("str[%d] = %s\n", j, str[j]);
			i++;
			j++;
		}
	}
	else
		return (0);
	return (0);
}
*/
