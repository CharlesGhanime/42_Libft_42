/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vectors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:26:33 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/13 19:28:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"

int main(void)
{
    int i;

    t_vector v;
    vector_init(&v);

    vector_add(&v, "Bonjour");
    vector_add(&v, "tout");
    vector_add(&v, "le");
    vector_add(&v, "monde");

    for (i = 0; i < vector_total(&v); i++)
        printf("%s ", (char *) vector_get(&v, i));
    printf("\n");

    vector_delete(&v, 3);
    vector_delete(&v, 2);
    vector_delete(&v, 1);

    vector_set(&v, 0, "Hello");
    vector_add(&v, "World");

    for (i = 0; i < vector_total(&v); i++)
        printf("%s ", (char *) vector_get(&v, i));
    printf("\n");

    vector_free(&v);
}
