/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_macros_vectors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:45:11 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/13 22:45:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"

int main(void)
{
    int i;

    VECTOR_INIT(v);

    VECTOR_ADD(v, "Bonjour");
    VECTOR_ADD(v, "tout");
    VECTOR_ADD(v, "le");
    VECTOR_ADD(v, "monde");

    for (i = 0; i < VECTOR_TOTAL(v); i++)
        printf("%s ", VECTOR_GET(v, char*, i));
    printf("\n");

    VECTOR_DELETE(v, 3);
    VECTOR_DELETE(v, 2);
    VECTOR_DELETE(v, 1);

    VECTOR_SET(v, 0, "Hello");
    VECTOR_ADD(v, "World");

    for (i = 0; i < VECTOR_TOTAL(v); i++)
        printf("%s ", VECTOR_GET(v, char*, i));
    printf("\n");

    VECTOR_FREE(v);
}
