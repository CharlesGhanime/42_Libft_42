/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trees_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:06:45 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 08:42:55 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trees.h"

t_tree		*new_tree(int value)
{
	t_tree *tr;

	if ((tr = (t_tree *)malloc(sizeof(t_tree))) == NULL)
		return (NULL);
	tr->value = value;
	tr->tleft = NULL;
	tr->tright = NULL;
	tr->parent = NULL;

	/* Aide pour le developpeur */
	printf("creation de la racine avec value = %d\n", tr->value);
	return (tr);
}

t_tree		*add_tree(t_tree *left, t_tree *right, int node)
{
	t_tree *tr;

	if((tr = new_tree(1)) == NULL)
		return (NULL);
	tr->tleft = left;
	tr->tright = right;
	if (left != NULL)
		left->parent = tr;
	if (right != NULL)
		right->parent = tr;
	return (tr);
}

void		free_tree(t_tree *tr)
{
	if (tr == NULL)
		return ;

	/* Aide pour le developpeur  */
	printf("Suppression de la racine avec value = %d\n", tr->value);
	free_tree(tr->tleft);
	free_tree(tr->tright);
	free(tr);
}
