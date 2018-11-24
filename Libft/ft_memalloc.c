/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:12:45 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 18:55:13 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/24 13:00:30 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

<<<<<<< HEAD
	if (size > 65535 || !(memory = malloc(sizeof(size))))
=======
	if(size == 0)
		return (NULL);
	if (!(memory = malloc(sizeof(size))))
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
