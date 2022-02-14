/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:13:24 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 19:59:17 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	b dizisinin karakterlerini c dizsi ile değişririr. 
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi[] = "Bilgisayar";

    printf("cdizi bellek içeriği: %s\n", cdizi);

    memset(cdizi, 'x', 5);

    printf("cdizi bellek içeriği: %s", cdizi);

    return 0;
}
*/