/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_tools_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:17:20 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/13 19:31:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"

void	*vector_get(t_vector *v, uintmax_t index)
{
	if (index >= 0 && index < v->total)
		return (v->items[index]);
	return (NULL);
}

void	vector_delete(t_vector *v, uintmax_t index)
{
	uintmax_t i;

	if (index < 0 || index >= v->total)
		return ;
	v->items[index] = NULL;
	while ((i = index) < v->total - 1)
	{
		v->items[i] = v->items[i + 1];
		v->items[i + 1] = NULL;
		i++;
	}
	v->total--;
	if(v->total > 0 && v->total == v->capacity / 4)
		vector_resize(v, v->capacity / 2);
}

void	vector_free(t_vector *v)
{
	free(v->items);
}
