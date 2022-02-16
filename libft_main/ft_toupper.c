/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:17:25 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 20:42:30 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//küçük harfleri büyük harf yapar

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'B';

	printf("%c\n", ft_toupper(ch1));
	printf("%c\n", ft_toupper(ch2));
	return 0;
}
*/