/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:22:42 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 21:26:56 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
num: Tahsis edilecek eleman sayısını gösterir.

size: Her bir elemanın byte olarak boyutunu gösterir.
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ip, id;

    ip = (int *) calloc(10, sizeof(int));

    for (id=0; id<10; id++) {
         
         printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}
*/