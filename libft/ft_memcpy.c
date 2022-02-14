/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:14:57 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 18:30:17 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( void )
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    memset(dest, '\0', 40);
    memcpy(dest, cp, 40);
    printf("%s\n", dest);

    memset(dest, '\0', 40);
    memccpy(dest, cp, '&', 40);
    printf("%s", dest);

    return 0;
}
*/