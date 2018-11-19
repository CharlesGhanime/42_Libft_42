/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:12:45 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 15:02:53 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(sizeof(size));
	if (!memory)
		return (NULL);
	while (i <= size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
