/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_tools_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:41:10 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/13 22:44:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"

void	vector_init(t_vector *v)
{
	v->capacity = VECTOR_INIT_CAPACITY;
	v->total = 0;
	v->items = malloc(sizeof(void *) * v->capacity);
}

uintmax_t		vector_total(t_vector *v)
{
	return (v->total);
}

void	vector_resize(t_vector *v, uintmax_t capacity)
{
	void **items;

	items = malloc(sizeof(void *) * capacity);
	items = (v->items);
	if (items)
	{
		v->items = items;
		v->capacity = capacity;
	}
}

void	vector_add(t_vector *v, void *item)
{
	if (v->capacity == v->total)
		vector_resize(v, v->capacity * 2);
	v->items[v->total++] = item;
}

void	vector_set(t_vector *v, uintmax_t index, void *item)
{
	if (index >= 0 && index < v->total)
		v->items[index] = item;
}
