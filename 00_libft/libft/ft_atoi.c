/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:22:10 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/11 20:27:45 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fonk(void);

int main(void)
{
    char cdizi[40];

    strcpy(cdizi, "\n 12q34q");
    printf("Karakter dizisi: %sInt değer: %d\n", cdizi, ft_atoi(cdizi));

    strcpy(cdizi, "\n 12q34q");
    printf("Karakter dizisi: %sInt değer: %d", cdizi, atoi(cdizi));

    return 0;	
}
*/