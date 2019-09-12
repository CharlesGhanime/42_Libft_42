/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trees.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:59:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 08:40:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREES_H
#define TREES_H

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_tree
{
				int value;
				struct s_tree *tleft;
				struct s_tree *tright;
				struct s_tree *parent;
}				t_tree;

t_tree			*new_tree(int value);
void			free_tree(t_tree *tr);
t_tree			*add_tree(t_tree *left, t_tree *right, int node);

#endif
