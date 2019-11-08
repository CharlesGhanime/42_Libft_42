/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:55:17 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 18:24:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

/*
** Type booleen
*/

typedef enum	Bool
{
	FALSE,
	TRUE
}				Bool;

/*
** Definition d'une pile
*/

typedef struct				s_stelement
{
	int						value;
	struct s_stelement		*next;
}							t_stelement;

/*
** Prototypes de fonctions
*/

t_stelement				*new_stack(void);
Bool					is_empty_stack(t_stelement *st);
t_stelement				*push_stack(t_stelement *st, int value);
t_stelement				*pop_stack(t_stelement *st);
void					print_stack(t_stelement *st);
int						top_stack(t_stelement *st);
int						stack_length(t_stelement *st);
t_stelement				*free_stack(t_stelement *st);

#endif
