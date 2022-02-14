/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:12:51 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 20:00:35 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp = "Bilgisayar";
    int ret;

    ret = strlen(cp);

    printf("%s karakter dizisinin uzunluğu: %d\n", cp, ret);

    return 0;
}
*/