/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trees_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:13:04 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 15:25:40 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trees.h"

int main (/*int argc, char **argv*/)
{
	t_tree	*tr;
/*	int		i;

	i = 1;
	tr = join_tree(join_tree(new_tree(8), new_tree(3), 2), tleft
	new_tree(4),  tright
	6);  node  */
	tr = join_tree(join_tree(new_tree(8), new_tree(3), 2), new_tree(4), 6);

/*	while (i < argc)
	{
		argv[i]
			i++;
	}*/

	print_tree_prefix(tr);
	printf("Nodes number : %d\n", count_tree_nodes(tr));
	free_tree(tr);
	return (0);
}
