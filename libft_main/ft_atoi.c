/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:22:10 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/15 00:10:34 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//isspace karakterlerini arar
int	ft_isspace(int c)
{
	return (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

//gönderilen diziyi int çeviri. 
int	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (ft_isspace(*str)))
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

int main()
{
    char* s1 = "-123";   
    char* s2 = "a123";
    char* s3 = "  123aa";
    char* s4 = "123 425";
    
    int num1 = ft_atoi(s1);
    int num2 = ft_atoi(s2);
    int num3 = ft_atoi(s3);
    int num4 = ft_atoi(s4);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}
*/