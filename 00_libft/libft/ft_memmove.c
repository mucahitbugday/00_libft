/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:15:21 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 20:03:24 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (dst_ptr > src_ptr)
	{
		while (len-- > 0)
			*(dst_ptr + len) = *(src_ptr + len);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(dst_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    memmove(cdizi1, cdizi2, 10);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}
*/