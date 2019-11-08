/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:52:35 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/13 22:46:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
#define VECTORS_H

#include <stdio.h>
#include <stdlib.h>

#define VECTOR_INIT_CAPACITY 4

/*
** USEFUL MACROS
*/

#define VECTOR_INIT(vec) t_vector vec; vector_init(&vec)
#define VECTOR_ADD(vec, item) vector_add(&vec, (void *) item)
#define VECTOR_SET(vec, id, item) vector_set(&vec, id, (void *) item)
#define VECTOR_GET(vec, type, id) (type) vector_get(&vec, id)
#define VECTOR_DELETE(vec, id) vector_delete(&vec, id)
#define VECTOR_TOTAL(vec) vector_total(&vec)
#define VECTOR_FREE(vec) vector_free(&vec)

/*
** VECTOR STRUCTURE DEFINITION
*/

typedef struct	s_vector
{
	void		**items;
	uintmax_t	capacity;
	uintmax_t	total;
}				t_vector;

/*
** VECTOR FUNCTIONS PROTOTYPES
*/

void			vector_init(t_vector *);
uintmax_t		vector_total(t_vector *);
void			vector_resize(t_vector *, uintmax_t);
void			vector_add(t_vector *, void *);
void			vector_set(t_vector *, uintmax_t, void *);
void			*vector_get(t_vector *, uintmax_t);
void			vector_delete(t_vector *, uintmax_t);
void			vector_free(t_vector *);

#endif
