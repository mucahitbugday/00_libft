/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:11:27 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 19:34:49 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Klavyeden girilen rakam değerler mi

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//rakam ve alfabetikmi
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = 'B', c2 = '7', c3 = '&';

    printf("%c alfanumerik bir karakter%s\n", c1, isalnum(c1) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s\n", c2, isalnum(c2) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s", c3, isalnum(c3) ? "dir!" : " değildir!");

    return 0;
}
*/