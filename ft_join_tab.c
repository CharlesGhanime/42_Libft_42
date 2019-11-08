/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:03:53 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 04:41:34 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_join_tab(char **tab, char **str)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (!(ft_str_isnumeric(tab[i]) || (tab[i][0] == '-'
		&& ft_str_isnumeric(tab[i] + 1))))
		{
			ft_free_tab(tab);
			ft_putendl_fd("Error", 2);
			exit(1);
		}
//		*str = ft_strjoinfree(*str, tab[i], 1);
		*str = ft_strjoin(*str, tab[i]);
//		*str = ft_strjoinfree(*str, "\n", 1);
		*str = ft_strjoin(*str, "\n");
		i++;
	}
}
