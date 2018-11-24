/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:53:57 by cghanime          #+#    #+#             */
<<<<<<< HEAD:Libft/ft_strrev.c
/*   Updated: 2018/11/24 18:31:22 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/23 22:47:54 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470:Libft/ft_strrev.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
<<<<<<< HEAD:Libft/ft_strrev.c
	size_t	i;
	size_t	j;
	int		c;
=======
	size_t i;
	size_t j;
	int c;
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470:Libft/ft_strrev.c

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}