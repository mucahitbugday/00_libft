/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:10:25 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 19:33:09 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

//rakamları gösterir
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = '3', c2 = '7', c3 = 'M';

    printf("%c bir rakam%s\n", c1, isdigit(c1) ? "dır!" : " değildir!");
    printf("%c bir rakam%s\n", c2, isdigit(c2) ? "dır!" : " değildir!");
    printf("%c bir rakam%s", c3, isdigit(c3) ? "dır!" : " değildir!");

    return 0;
}
*/