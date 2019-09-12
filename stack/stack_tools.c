/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:01:33 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 18:26:02 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stelement		*new_stack(void)
{
	return (NULL);
}

Bool			is_empty_stack(t_stelement *st)
{
	if (st == NULL)
		return (TRUE);
	return (FALSE);
}

t_stelement		*push_stack(t_stelement *st, int value)
{
	t_stelement *element;

	if ((element = (t_stelement *)malloc(sizeof(t_stelement))) == NULL)
		return (NULL);
	element->value = value;
	element->next = st;
	return (element);
}

t_stelement		*pop_stack(t_stelement *st)
{
	t_stelement *element;

	if (is_empty_stack(st))
		return (new_stack());
	element = st->next;
	free (st);
	return (element);
}

void			print_stack(t_stelement *st)
{
	if (is_empty_stack(st))
	{
		printf("Stack is empty, nothing to print.\n");
		return;
	}
	while (is_empty_stack(st) != TRUE)
	{
		printf("[%d]\n", st->value);
		st = st->next;
	}
}

int				top_stack(t_stelement *st)
{
	if (is_empty_stack(st) == TRUE)
	{
		printf("No top, stack is empty\n");
		return (0);
	}
	return (st->value);
}

int				stack_length(t_stelement *st)
{
	int length;

	length = 0;
	while (is_empty_stack(st) == FALSE)
	{
		length++;
		st = st->next;
	}
	return (length);

}

t_stelement		*free_stack(t_stelement *st)
{
	while (is_empty_stack(st) != TRUE)
		st = pop_stack(st);
	return (new_stack());
}
