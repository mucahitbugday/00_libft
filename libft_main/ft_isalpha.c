/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:57:22 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 19:31:22 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

//alfabetik karakterleri gösteri
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'h', c2 = '4', c3 = '%';

    printf("%c alfabetik bir karakter%s\n", c1, ft_isalpha(c1) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s\n", c2, ft_isalpha(c2) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s", c3, ft_isalpha(c3) ? "dir!" : " değildir!");

    return 0;
}
*/