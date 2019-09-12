/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trees_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:13:04 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 08:45:38 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trees.h"

int main (/*int argc, char **argv*/)
{
	t_tree	*tr;
	int		i;

	i = 1;
	tr = add_tree(new_tree(2), new_tree(3), 1);

/*	while (i < argc)
	{
		argv[i]
			i++;
	}*/

	free_tree(tr);
	return (0);
}
