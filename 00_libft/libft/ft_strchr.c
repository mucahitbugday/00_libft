/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:18:21 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 19:59:43 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ptr_s;

	ptr_s = (char *)s;
	i = 0;
	while (*(ptr_s + i))
	{
		if (*(ptr_s + i) == (char)c)
			return (ptr_s + i);
		i++;
	}
	if (c == '\0')
		return (ptr_s + i);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char cdizi[] = "Bilgisayar";
    char *ret;

    ret = strchr(cdizi, 's');

    printf("Bulunan karakterden itibaren dizi içeriği: %s", ret);

    return 0;
}
*/