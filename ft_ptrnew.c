/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:28:24 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/30 14:47:40 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_ptrnew(size_t len, size_t size)
{
	void		*ptr;

	if (!(ptr = malloc(size * len)))
		return (NULL);
	ft_bzero(ptr, size * len);
	return (ptr);
}
