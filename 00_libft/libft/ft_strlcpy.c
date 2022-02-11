/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:16:26 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 20:02:25 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlama";

    strcpy(cdizi1, cdizi2);

    printf("cdizi1 bellek içeriği: %s\n", cdizi1);

    return 0;
}
*/