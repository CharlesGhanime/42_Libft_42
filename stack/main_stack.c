/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:08:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/12 18:26:43 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int main (void)
{
	t_stelement *st;

	st = new_stack();
	print_stack(st);
	printf("Stack top : %d\n", top_stack(st));
	printf("Stack length : %d\n", stack_length(st));

	printf("\n----------------------------\n\n");
	
	st = push_stack(st, 14);
	st = push_stack(st, 47);
	st = push_stack(st, 23);
	st = push_stack(st, 31);
	print_stack(st);
	printf("Stack top : %d\n", top_stack(st));
	printf("Stack length : %d\n", stack_length(st));
	if (is_empty_stack(st))
		printf("Stack is empty.\n");
	else
		printf("Stack has elements.\n");
	
	printf("\n----------------------------\n\n");
	
	st = pop_stack(st);
	print_stack(st);
	printf("Stack top : %d\n", top_stack(st));
	printf("Stack length : %d\n", stack_length(st));
	
	printf("\n----------------------------\n\n");
	
	st = free_stack(st);
	print_stack(st);
	printf("Stack top : %d\n", top_stack(st));
	printf("Stack length : %d\n", stack_length(st));
	return (0);
}
