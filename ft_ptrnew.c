/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:28:24 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/10 20:02:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_ptrnew(size_t size)
{
	void		*ptr;

	if (!(ptr = malloc(sizeof(void *) * size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
